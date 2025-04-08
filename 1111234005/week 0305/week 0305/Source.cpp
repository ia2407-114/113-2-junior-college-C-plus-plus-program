/*�D��1. �N�ǥ͵��c��J�d�ҵ{���X�����N��������c�A�[�W�ۧڰѦҫ��СA�z�L��L��J4���ǥ͸�ơA�ھھǸ� ID���J�쵲��C���A�̫�N�쵲��C�����e�L�X�C*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �w�q�ǥ͵��c
struct clientData {
    unsigned int ID; // �Ǹ�
    char Name[15]; // �ǥͩm�W    
    int math, computer; // �ƾǡB�q�����Z   
    double average; // �������Z   
    struct clientData* nextPtr; // �ۧڰѦҫ���
};

typedef struct clientData ClientData; // �w�q�ǥ͵��c����
typedef ClientData* ClientDataPtr; // �w�q�ǥͫ�������

// �禡�쫬
void insert(ClientDataPtr* sPtr, unsigned int id, char name[], int math, int computer);
char delete(ClientDataPtr* sPtr, unsigned int id);
int isEmpty(ClientDataPtr sPtr);
void printList(ClientDataPtr currentPtr);
void instructions(void);
void calculateAverage(ClientDataPtr student);

int main(void)
{
    ClientDataPtr startPtr = NULL; // ��l�ɡA�S���ǥ͸��
    unsigned int id;
    int math, computer;
    char name[15];

    instructions(); // ��ܿ��
    printf("%s", "? ");
    unsigned int choice; // �ϥΪ̿��
    scanf("%u", &choice);

    // ��J�|���ǥ͸�ƨô��J�쵲��C
    for (int i = 0; i < 4; i++) {
        printf("��J�� %d ��ǥ͸�ơG\n", i + 1);
        printf("�Ǹ��G");
        scanf_s("%u", &id);
        getchar();  // �M���w�İϤ��������
        printf("�m�W�G");
        fgets(name, sizeof(name), stdin); // Ū���m�W�A�]�t�Ů�
        name[strcspn(name, "\n")] = 0; // �h�������������
        printf("�ƾǦ��Z�G");
        scanf_s("%d", &math);
        printf("�q�����Z�G");
        scanf_s("%d", &computer);

        insert(&startPtr, id, name, math, computer); // ���J�ǥ͸�ƨ��쵲��C
    }

    printf("\n�ǥ͸���쵲��C�G\n");
    printList(startPtr); // �C�L�쵲��C�����e

    puts("End of run.");
    return 0;
}

// ��ܿ��
void instructions(void)
{
    puts("Enter your choice:\n"
        "   1 to insert a student into the list.\n"
        "   2 to delete a student from the list.\n"
        "   3 to end.");
}

// �ھھǸ����J�ǥ͸�ơA�O���Ƨ�
void insert(ClientDataPtr* sPtr, unsigned int id, char name[], int math, int computer)
{
    ClientDataPtr newPtr = malloc(sizeof(ClientData)); // �Ыطs�`�I

    if (newPtr != NULL) { // �ˬd�O�_���Ŷ�
        newPtr->ID = id; // �]�m�Ǹ�
        strcpy_s(newPtr->Name, name); // �]�m�m�W
        newPtr->math = math; // �]�m�ƾǦ��Z
        newPtr->computer = computer; // �]�m�q�����Z
        calculateAverage(newPtr); // �p�⥭�����Z
        newPtr->nextPtr = NULL;

        ClientDataPtr previousPtr = NULL;
        ClientDataPtr currentPtr = *sPtr;

        // ���A�����J��m�A�ھھǸ��Ƨ�
        while (currentPtr != NULL && id > currentPtr->ID) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // ���J�s�`�I��C��}�Y
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // ���J�s�`�I��C�����Υ���
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("%u not inserted. No memory available.\n", id);
    }
}

// �R���ǥ͸��
char double(ClientDataPtr* sPtr, unsigned int id)
{
    if (id == (*sPtr)->ID) { // �p�G�O�Ĥ@�Ӹ`�I
        ClientDataPtr tempPtr = *sPtr; // �O�d�Q�R�����`�I
        *sPtr = (*sPtr)->nextPtr; // �����Ӹ`�I
        free(tempPtr); // ���񤺦s
        return id;
    }
    else {
        ClientDataPtr previousPtr = *sPtr;
        ClientDataPtr currentPtr = (*sPtr)->nextPtr;

        // �d��`�I�çR��
        while (currentPtr != NULL && currentPtr->ID != id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (currentPtr != NULL) {
            ClientDataPtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return id;
        }
    }

    return 0;
}

// �ˬd�쵲��C�O�_����
int isEmpty(ClientDataPtr sPtr)
{
    return sPtr == NULL;
}

// ����쵲��C
void printList(ClientDataPtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("List is empty.\n");
    }
    else {
        puts("The list is:");
        while (currentPtr != NULL) {
            printf("�Ǹ�: %u, �m�W: %s, �ƾ�: %d, �q��: %d, �������Z: %.2f\n",
                currentPtr->ID, currentPtr->Name, currentPtr->math,
                currentPtr->computer, currentPtr->average);
            currentPtr = currentPtr->nextPtr;
        }
        puts(""); // ����
    }
}

// �p��ǥͪ��������Z
void calculateAverage(ClientDataPtr student)
{
    student->average = (student->math + student->computer) / 2.0;
}

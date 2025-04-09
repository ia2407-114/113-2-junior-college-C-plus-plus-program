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

typedef struct clientData Student;
typedef Student* StudentPtr;

// �禡�쫬
void insert(StudentPtr* sPtr, unsigned int ID, char Name[], int math, int computer);
void printList(StudentPtr currentPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; // ��l�ɡA�S���ǥ͸��
    unsigned int ID;
    char Name[15];
    int math, computer;

    instructions(); // ��ܿ��

    // Ū�J4���ǥ͸��
    for (int i = 0; i < 4; i++) {
        printf("��J�� %d ��ǥ͸�ơG\n", i + 1);
        printf("�Ǹ��G");
        scanf_s("%u", &ID);

        printf("�m�W�G");
        fgets(Name, sizeof(Name), stdin);
        Name[strcspn(Name, "\n")] = 0; // �h�������������
        printf("�ƾǦ��Z�G");
        scanf_s("%d", &math);
        printf("�q�����Z�G");
        scanf_s("%d", &computer);

        insert(&startPtr, ID, Name, math, computer);
    }

    printf("\n�ǥ͸���쵲��C�G\n");
    printList(startPtr);

    return 0;
}

// ��ܿ��
void instructions(void) {
    puts("��J�A�����:\n"
        "   1 ���J�ǥ͸�ƨ��쵲��C���C\n"
        "   2 �d���쵲��C�����ǥ͸�ơC\n");
}

// �ھھǸ����J�ǥ͸�ơA�O���Ƨ�
void insert(StudentPtr* sPtr, unsigned int ID, char Name[], int math, int computer) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));

    if (newPtr != NULL) {
        newPtr->ID = ID;
        strcpy_s(newPtr->Name, Name);
        newPtr->math = math;
        newPtr->computer = computer;
        newPtr->average = (math + computer) / 2.0;
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        // ���A�����J��m�A�ھھǸ��j�p�Ƨ�
        while (currentPtr != NULL && ID > currentPtr->ID) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // �p�G�b�쵲��C�}�Y���J
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // ���J���쵲��C�������Υ���
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("�L�k���t���s�C\n");
    }
}

// ���L�쵲��C
void printList(StudentPtr currentPtr) {
    if (currentPtr == NULL) {
        puts("�쵲��C���šC\n");
    }
    else {
        while (currentPtr != NULL) {
            printf("�Ǹ�: %u, �m�W: %s, �ƾ�: %d, �q��: %d, ����: %.2f\n",
                currentPtr->ID, currentPtr->Name, currentPtr->math,
                currentPtr->computer, currentPtr->average);
            currentPtr = currentPtr->nextPtr;
        }
        puts(""); // ����
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ۧڰѦҵ��c: �ǥ͸`�I
struct StudentNode {
    int id; // �Ǹ�
    char name[50]; // �m�W
    float math, computer; // �ƾǻP�q�����Z
    struct StudentNode* nextPtr; // ���V�U�@�Ӹ`�I������
};

typedef struct StudentNode StudentNode;
typedef StudentNode* StudentNodePtr;

// ��ƭ쫬
void insert(StudentNodePtr* sPtr, int id, char name[], float math, float computer);
int Delete(StudentNodePtr* sPtr, int id);
int isEmpty(StudentNodePtr sPtr);
void printList(StudentNodePtr currentPtr);
void instructions(void);

int main(void)
{
    StudentNodePtr startPtr = NULL; // ��l���쵲��C����
    int id;
    char name[50];
    float math, computer;

    instructions(); // ��ܿ��
    printf("? ");
    unsigned int choice;
    scanf_s("%u", &choice);

    while (choice != 3) {
        switch (choice) {
        case 1:
            printf("�п�J�Ǹ��B�m�W�B�ƾǦ��Z�B�q�����Z: ");
            scanf_s("%d %49s %f %f", &id, name, (unsigned)_countof(name), &math, &computer);
            insert(&startPtr, id, name, math, computer);
            printList(startPtr);
            break;
        case 2:
            if (!isEmpty(startPtr)) {
                printf("�п�J�n�R�����Ǹ�: ");
                scanf_s("%d", &id);

                if (Delete(&startPtr, id)) {
                    printf("�Ǹ� %d �w�R���C\n", id);
                    printList(startPtr);
                }
                else {
                    printf("�Ǹ� %d ���s�b�C\n\n", id);
                }
            }
            else {
                puts("�쵲��C���šC\n");
            }
            break;
        default:
            puts("�L�Ī���ܡC\n");
            instructions();
            break;
        }
        printf("? ");
        scanf_s("%u", &choice);
    }
    puts("�{�������C");
}

// ��ܿ��
void instructions(void)
{
    puts("�п�ܾާ@:");
    puts("   1 - ���J�ǥ͸��\n"
        "   2 - �R���ǥ͸��\n"
        "   3 - �����{��");
}

// �ھھǸ��ƧǴ��J�s�ǥ�
void insert(StudentNodePtr* sPtr, int id, char name[], float math, float computer)
{
    StudentNodePtr newPtr = (StudentNodePtr)malloc(sizeof(StudentNode));
    if (newPtr != NULL) {
        newPtr->id = id;
        strcpy_s(newPtr->name, sizeof(newPtr->name), name);
        newPtr->math = math;
        newPtr->computer = computer;
        newPtr->nextPtr = NULL;

        StudentNodePtr previousPtr = NULL;
        StudentNodePtr currentPtr = *sPtr;

        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("�Ǹ� %d ���J���ѡC�O���餣���C\n", id);
    }
}

// �ھھǸ��R���ǥ�
int Delete(StudentNodePtr* sPtr, int id)
{
    if (*sPtr == NULL) {
        return 0;
    }

    if (id == (*sPtr)->id) {
        StudentNodePtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return 1;
    }
    else {
        StudentNodePtr previousPtr = *sPtr;
        StudentNodePtr currentPtr = (*sPtr)->nextPtr;

        while (currentPtr != NULL && currentPtr->id != id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (currentPtr != NULL) {
            StudentNodePtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return 1;
        }
    }
    return 0;
}

// �ˬd�쵲��C�O�_����
int isEmpty(StudentNodePtr sPtr)
{
    return sPtr == NULL;
}

// �C�L�쵲��C���e
void printList(StudentNodePtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("�쵲��C���šC\n");
    }
    else {
        puts("�ǥ͸�ƦC��:");
        while (currentPtr != NULL) {
            printf("�Ǹ�: %d, �m�W: %s, �ƾ�: %.2f, �q��: %.2f\n",
                currentPtr->id, currentPtr->name, currentPtr->math, currentPtr->computer);
            currentPtr = currentPtr->nextPtr;
        }
        puts("");
    }
}

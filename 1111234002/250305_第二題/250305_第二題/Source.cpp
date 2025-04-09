/*�D��1. �N�ǥ͵��c��J�d�ҵ{���X�����N��������c�A�[�W�ۧڰѦҫ��СA�z�L��L��J4���ǥ͸�ơA�ھھǸ� ID���J�쵲��C���A�̫�N�쵲��C�����e�L�X�C
�D��2. �ӤW�D�A�z�L��L��J1���ǥ�ID�A�ھھǸ� ID�R���쵲��C���������`�I�A�̫�N�쵲��C�����e�L�X�C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // �]�t�r��禡�w

#define _CRT_SECURE_NO_WARNINGS // �קK scanf ĵ�i

// �w�q�ǥ͵��c��A�]�t�Ǹ��B�m�W�B�ƾǦ��Z�B�q�����Z�B�������Z�M���V�U�@�Ӹ`�I������
struct clientData {
    unsigned int ID; // �Ǹ�
    char Name[15]; // �ǥͩm�W    
    int math, computer; // �ƾǡB�q�����Z   
    double average; // �������Z   
    struct clientData* nextPtr; // ���V�U�@�Ӹ`�I������
};

typedef struct clientData Student; // �� struct clientData ���O�W Student
typedef Student* StudentPtr; // �w�q StudentPtr �� Student*

// �禡�쫬
void insert(StudentPtr* sPtr, unsigned int id, char name[], int math, int computer);
int deleteStudent(StudentPtr* sPtr, unsigned int id);
int isEmpty(StudentPtr sPtr);
void printList(StudentPtr currentPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; // ��l���쵲��C���}�Y�� NULL
    unsigned int id;
    char name[15];
    int math, computer;

    instructions(); // ��ܾާ@���
    printf("? ");
    unsigned int choice; // �x�s�ϥΪ̿�J�����
    scanf_s("%u", &choice);

    while (choice != 3) { // ��ϥΪ̿�� 3�]�����{���^�ɤ~���X�j��
        switch (choice) {
        case 1:
            printf("��J�ǥ;Ǹ�: ");
            scanf_s("%u", &id);
            printf("��J�ǥͩm�W: ");
            scanf_s("%14s", name); // ������סA����X
            printf("��J�ƾǦ��Z: ");
            scanf_s("%d", &math);
            printf("��J�q�����Z: ");
            scanf_s("%d", &computer);

            insert(&startPtr, id, name, math, computer); // ���J�ǥ͸�ƨ��쵲��C
            printList(startPtr);
            break;
        case 2:
            if (!isEmpty(startPtr)) { // �T�O�쵲��C������
                printf("��J�n�R�����ǥ;Ǹ�: ");
                scanf_s("%u", &id);
                if (deleteStudent(&startPtr, id)) {
                    printf("�Ǹ� %u ���ǥͤw�R���C\n", id);
                    printList(startPtr);
                }
                else {
                    printf("�Ǹ� %u ���ǥͥ����C\n\n", id);
                }
            }
            else {
                puts("�쵲��C���šC\n");
            }
            break;
        default:
            puts("�L�Ŀﶵ�C\n");
            instructions();
            break;
        }
        printf("? ");
        scanf_s("%u", &choice);
    }
    puts("�{�������C");
}

// ��ܿ��
void instructions(void) {
    puts("�п�ܾާ@:\n"
        "   1 ���J�@�Ӿǥ͸�ƨ��쵲��C���C\n"
        "   2 �ھھǸ��R���쵲��C�����ǥ͸�ơC\n"
        "   3 �����{���C");
}

// ���J�ǥ͸�ơA�ë��ӾǸ��Ƨ�
void insert(StudentPtr* sPtr, unsigned int id, char name[], int math, int computer) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // ���t�O���鵹�s�`�I
    if (newPtr != NULL) { // �T�O�O������t���\
        newPtr->ID = id;
        strcpy(newPtr->Name, name); // �ƻs�W�r
        newPtr->math = math;
        newPtr->computer = computer;
        newPtr->average = (math + computer) / 2.0; // �p�⥭�����Z
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        while (currentPtr != NULL && id > currentPtr->ID) { // ���A�����J��m
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL) { // ���J���쵲��C�}�Y
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // ���J��A���m
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("�L�k���t�O����C\n");
    }
}

// �ھھǸ��R���ǥ͸��
int deleteStudent(StudentPtr* sPtr, unsigned int id) {
    if (*sPtr != NULL && (*sPtr)->ID == id) { // �R���Ĥ@�Ӹ`�I
        StudentPtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return 1;
    }
    else {
        StudentPtr previousPtr = *sPtr;
        StudentPtr currentPtr = (*sPtr)->nextPtr;

        while (currentPtr != NULL && currentPtr->ID != id) { // �M���쵲��C�M��ؼи`�I
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (currentPtr != NULL) { // ���`�I�A�R��
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(currentPtr);
            return 1;
        }
    }
    return 0; // �����`�I
}

// �ˬd�쵲��C�O�_����
int isEmpty(StudentPtr sPtr) {
    return sPtr == NULL;
}

// �L�X�쵲��C�����ǥ͸��
void printList(StudentPtr currentPtr) {
    if (isEmpty(currentPtr)) {
        puts("�쵲��C���šC\n");
    }
    else {
        puts("�쵲��C�����ǥ͸��:");
        while (currentPtr != NULL) {
            printf("�Ǹ�: %u, �m�W: %s, �ƾ�: %d, �q��: %d, ����: %.2f --> ",
                currentPtr->ID, currentPtr->Name, currentPtr->math,
                currentPtr->computer, currentPtr->average);
            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}

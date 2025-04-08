#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �w�q�ǥ͵��c
struct student {
    int id;
    char name[50];
    struct student* nextPtr;
};

typedef struct student Student;
typedef Student* StudentPtr;

// �禡�쫬
void insert(StudentPtr* sPtr, int id, char name[]);
void printList(StudentPtr currentPtr);
int deleteNode(StudentPtr* sPtr, int id);
void freeList(StudentPtr* sPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL;
    int id;
    char name[50];
    int choice;

    instructions();

    // Ū�J4���ǥ͸��
    for (int i = 0; i < 4; i++) {
        printf("��J�� %d ��ǥ͸�ơG\n", i + 1);
        printf("�Ǹ��G");
        scanf_s("%d", &id);
        //getchar();  // ��������Ÿ�
        printf("�m�W�G");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        insert(&startPtr, id, name);
    }

    printf("\n�ǥ͸���쵲��C�G\n");
    printList(startPtr);

    // �߰ݬO�_�R�����
    printf("�O�_�n�R���ǥ͸�ơH(1 = �O, 0 = �_): ");
    scanf_s("%d", &choice);

    if (choice == 1) {
        printf("�п�J�n�R�����Ǹ��G");
        scanf_s("%d", &id);

        if (deleteNode(&startPtr, id)) {
            printf("�Ǹ� %d �w�Q�R���C\n", id);
        }
        else {
            printf("�䤣��Ǹ� %d�C\n", id);
        }

        printf("\n�R���᪺�ǥ͸���쵲��C�G\n");
        printList(startPtr);
    }

    // ����O����
    freeList(&startPtr);

    return 0;
}

// ��ܿ��
void instructions(void) {
    puts("��J�A�����:\n"
        "   1 ���J�ǥ͸�ƨ��쵲��C���C\n"
        "   2 �d���쵲��C�����ǥ͸�ơC\n"
        "   3 �R���ǥ͸�ơC\n");
}

// �ھھǸ����J�ǥ͸�ơA�O���Ƨ�
void insert(StudentPtr* sPtr, int id, char name[]) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));
    if (newPtr != NULL) {
        newPtr->id = id;
        strcpy_s(newPtr->name, name);
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        // �ھھǸ���쥿�T�����J��m
        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // ���J�b�쵲��C�}�Y
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
        printf("�L�k���t���s�C\n");
    }
}

// �R���`�I
int deleteNode(StudentPtr* sPtr, int id) {
    StudentPtr previousPtr = NULL;
    StudentPtr currentPtr = *sPtr;

    // ���������`�I
    while (currentPtr != NULL && currentPtr->id != id) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    // �p�G���`�I
    if (currentPtr != NULL) {
        // �p�G�O�쵲��C���Ĥ@�Ӹ`�I
        if (previousPtr == NULL) {
            *sPtr = currentPtr->nextPtr;
        }
        else {
            previousPtr->nextPtr = currentPtr->nextPtr;
        }
        free(currentPtr);
        return 1; // �R�����\
    }

    return 0; // �䤣��`�I
}

// ���L�쵲��C
void printList(StudentPtr currentPtr) {
    if (currentPtr == NULL) {
        puts("�쵲��C���šC\n");
    }
    else {
        while (currentPtr != NULL) {
            printf("�Ǹ�: %d, �m�W: %s\n", currentPtr->id, currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        puts("");
    }
}

// ����O����
void freeList(StudentPtr* sPtr) {
    StudentPtr tempPtr;

    while (*sPtr != NULL) {
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
    }
}

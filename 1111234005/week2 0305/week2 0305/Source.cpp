#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義學生結構
struct student {
    int id;
    char name[50];
    struct student* nextPtr;
};

typedef struct student Student;
typedef Student* StudentPtr;

// 函式原型
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

    // 讀入4筆學生資料
    for (int i = 0; i < 4; i++) {
        printf("輸入第 %d 位學生資料：\n", i + 1);
        printf("學號：");
        scanf_s("%d", &id);
        //getchar();  // 消除換行符號
        printf("姓名：");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        insert(&startPtr, id, name);
    }

    printf("\n學生資料鏈結串列：\n");
    printList(startPtr);

    // 詢問是否刪除資料
    printf("是否要刪除學生資料？(1 = 是, 0 = 否): ");
    scanf_s("%d", &choice);

    if (choice == 1) {
        printf("請輸入要刪除的學號：");
        scanf_s("%d", &id);

        if (deleteNode(&startPtr, id)) {
            printf("學號 %d 已被刪除。\n", id);
        }
        else {
            printf("找不到學號 %d。\n", id);
        }

        printf("\n刪除後的學生資料鏈結串列：\n");
        printList(startPtr);
    }

    // 釋放記憶體
    freeList(&startPtr);

    return 0;
}

// 顯示選單
void instructions(void) {
    puts("輸入你的選擇:\n"
        "   1 插入學生資料到鏈結串列中。\n"
        "   2 查看鏈結串列中的學生資料。\n"
        "   3 刪除學生資料。\n");
}

// 根據學號插入學生資料，保持排序
void insert(StudentPtr* sPtr, int id, char name[]) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));
    if (newPtr != NULL) {
        newPtr->id = id;
        strcpy_s(newPtr->name, name);
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        // 根據學號找到正確的插入位置
        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // 插入在鏈結串列開頭
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
        printf("無法分配內存。\n");
    }
}

// 刪除節點
int deleteNode(StudentPtr* sPtr, int id) {
    StudentPtr previousPtr = NULL;
    StudentPtr currentPtr = *sPtr;

    // 找到對應的節點
    while (currentPtr != NULL && currentPtr->id != id) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    // 如果找到節點
    if (currentPtr != NULL) {
        // 如果是鏈結串列的第一個節點
        if (previousPtr == NULL) {
            *sPtr = currentPtr->nextPtr;
        }
        else {
            previousPtr->nextPtr = currentPtr->nextPtr;
        }
        free(currentPtr);
        return 1; // 刪除成功
    }

    return 0; // 找不到節點
}

// 打印鏈結串列
void printList(StudentPtr currentPtr) {
    if (currentPtr == NULL) {
        puts("鏈結串列為空。\n");
    }
    else {
        while (currentPtr != NULL) {
            printf("學號: %d, 姓名: %s\n", currentPtr->id, currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        puts("");
    }
}

// 釋放記憶體
void freeList(StudentPtr* sPtr) {
    StudentPtr tempPtr;

    while (*sPtr != NULL) {
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 自我參考結構: 學生節點
struct StudentNode {
    int id; // 學號
    char name[50]; // 姓名
    float math, computer; // 數學與電腦成績
    struct StudentNode* nextPtr; // 指向下一個節點的指標
};

typedef struct StudentNode StudentNode;
typedef StudentNode* StudentNodePtr;

// 函數原型
void insert(StudentNodePtr* sPtr, int id, char name[], float math, float computer);
int Delete(StudentNodePtr* sPtr, int id);
int isEmpty(StudentNodePtr sPtr);
void printList(StudentNodePtr currentPtr);
void instructions(void);

int main(void)
{
    StudentNodePtr startPtr = NULL; // 初始時鏈結串列為空
    int id;
    char name[50];
    float math, computer;

    instructions(); // 顯示選單
    printf("? ");
    unsigned int choice;
    scanf_s("%u", &choice);

    while (choice != 3) {
        switch (choice) {
        case 1:
            printf("請輸入學號、姓名、數學成績、電腦成績: ");
            scanf_s("%d %49s %f %f", &id, name, (unsigned)_countof(name), &math, &computer);
            insert(&startPtr, id, name, math, computer);
            printList(startPtr);
            break;
        case 2:
            if (!isEmpty(startPtr)) {
                printf("請輸入要刪除的學號: ");
                scanf_s("%d", &id);

                if (Delete(&startPtr, id)) {
                    printf("學號 %d 已刪除。\n", id);
                    printList(startPtr);
                }
                else {
                    printf("學號 %d 不存在。\n\n", id);
                }
            }
            else {
                puts("鏈結串列為空。\n");
            }
            break;
        default:
            puts("無效的選擇。\n");
            instructions();
            break;
        }
        printf("? ");
        scanf_s("%u", &choice);
    }
    puts("程式結束。");
}

// 顯示選單
void instructions(void)
{
    puts("請選擇操作:");
    puts("   1 - 插入學生資料\n"
        "   2 - 刪除學生資料\n"
        "   3 - 結束程式");
}

// 根據學號排序插入新學生
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
        printf("學號 %d 插入失敗。記憶體不足。\n", id);
    }
}

// 根據學號刪除學生
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

// 檢查鏈結串列是否為空
int isEmpty(StudentNodePtr sPtr)
{
    return sPtr == NULL;
}

// 列印鏈結串列內容
void printList(StudentNodePtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("鏈結串列為空。\n");
    }
    else {
        puts("學生資料列表:");
        while (currentPtr != NULL) {
            printf("學號: %d, 姓名: %s, 數學: %.2f, 電腦: %.2f\n",
                currentPtr->id, currentPtr->name, currentPtr->math, currentPtr->computer);
            currentPtr = currentPtr->nextPtr;
        }
        puts("");
    }
}

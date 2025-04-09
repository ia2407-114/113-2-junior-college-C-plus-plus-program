/*題目1. 將學生結構放入範例程式碼中替代原先的結構再加上自我參考指標，透過鍵盤輸入4筆學生資料，根據學號 ID插入鏈結串列中，最後將鏈結串列的內容印出。
題目2. 承上題，透過鍵盤輸入1筆學生ID，根據學號 ID刪除鏈結串列中的對應節點，最後將鏈結串列的內容印出。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 包含字串函式庫

#define _CRT_SECURE_NO_WARNINGS // 避免 scanf 警告

// 定義學生結構體，包含學號、姓名、數學成績、電腦成績、平均成績和指向下一個節點的指標
struct clientData {
    unsigned int ID; // 學號
    char Name[15]; // 學生姓名    
    int math, computer; // 數學、電腦成績   
    double average; // 平均成績   
    struct clientData* nextPtr; // 指向下一個節點的指標
};

typedef struct clientData Student; // 為 struct clientData 取別名 Student
typedef Student* StudentPtr; // 定義 StudentPtr 為 Student*

// 函式原型
void insert(StudentPtr* sPtr, unsigned int id, char name[], int math, int computer);
int deleteStudent(StudentPtr* sPtr, unsigned int id);
int isEmpty(StudentPtr sPtr);
void printList(StudentPtr currentPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; // 初始化鏈結串列的開頭為 NULL
    unsigned int id;
    char name[15];
    int math, computer;

    instructions(); // 顯示操作選單
    printf("? ");
    unsigned int choice; // 儲存使用者輸入的選擇
    scanf_s("%u", &choice);

    while (choice != 3) { // 當使用者選擇 3（結束程式）時才跳出迴圈
        switch (choice) {
        case 1:
            printf("輸入學生學號: ");
            scanf_s("%u", &id);
            printf("輸入學生姓名: ");
            scanf_s("%14s", name); // 限制長度，防止溢出
            printf("輸入數學成績: ");
            scanf_s("%d", &math);
            printf("輸入電腦成績: ");
            scanf_s("%d", &computer);

            insert(&startPtr, id, name, math, computer); // 插入學生資料到鏈結串列
            printList(startPtr);
            break;
        case 2:
            if (!isEmpty(startPtr)) { // 確保鏈結串列不為空
                printf("輸入要刪除的學生學號: ");
                scanf_s("%u", &id);
                if (deleteStudent(&startPtr, id)) {
                    printf("學號 %u 的學生已刪除。\n", id);
                    printList(startPtr);
                }
                else {
                    printf("學號 %u 的學生未找到。\n\n", id);
                }
            }
            else {
                puts("鏈結串列為空。\n");
            }
            break;
        default:
            puts("無效選項。\n");
            instructions();
            break;
        }
        printf("? ");
        scanf_s("%u", &choice);
    }
    puts("程式結束。");
}

// 顯示選單
void instructions(void) {
    puts("請選擇操作:\n"
        "   1 插入一個學生資料到鏈結串列中。\n"
        "   2 根據學號刪除鏈結串列中的學生資料。\n"
        "   3 結束程式。");
}

// 插入學生資料，並按照學號排序
void insert(StudentPtr* sPtr, unsigned int id, char name[], int math, int computer) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // 分配記憶體給新節點
    if (newPtr != NULL) { // 確保記憶體分配成功
        newPtr->ID = id;
        strcpy(newPtr->Name, name); // 複製名字
        newPtr->math = math;
        newPtr->computer = computer;
        newPtr->average = (math + computer) / 2.0; // 計算平均成績
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        while (currentPtr != NULL && id > currentPtr->ID) { // 找到適當的插入位置
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL) { // 插入到鏈結串列開頭
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // 插入到適當位置
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("無法分配記憶體。\n");
    }
}

// 根據學號刪除學生資料
int deleteStudent(StudentPtr* sPtr, unsigned int id) {
    if (*sPtr != NULL && (*sPtr)->ID == id) { // 刪除第一個節點
        StudentPtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return 1;
    }
    else {
        StudentPtr previousPtr = *sPtr;
        StudentPtr currentPtr = (*sPtr)->nextPtr;

        while (currentPtr != NULL && currentPtr->ID != id) { // 遍歷鏈結串列尋找目標節點
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (currentPtr != NULL) { // 找到節點，刪除
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(currentPtr);
            return 1;
        }
    }
    return 0; // 未找到節點
}

// 檢查鏈結串列是否為空
int isEmpty(StudentPtr sPtr) {
    return sPtr == NULL;
}

// 印出鏈結串列中的學生資料
void printList(StudentPtr currentPtr) {
    if (isEmpty(currentPtr)) {
        puts("鏈結串列為空。\n");
    }
    else {
        puts("鏈結串列中的學生資料:");
        while (currentPtr != NULL) {
            printf("學號: %u, 姓名: %s, 數學: %d, 電腦: %d, 平均: %.2f --> ",
                currentPtr->ID, currentPtr->Name, currentPtr->math,
                currentPtr->computer, currentPtr->average);
            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}

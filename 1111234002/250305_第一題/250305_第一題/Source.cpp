/*題目1. 將學生結構放入範例程式碼中替代原先的結構再加上自我參考指標，透過鍵盤輸入4筆學生資料，根據學號 ID插入鏈結串列中，最後將鏈結串列的內容印出。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定義學生結構
struct clientData {
    unsigned int ID; // 學號
    char Name[15]; // 學生姓名    
    int math, computer; // 數學、電腦成績   
    double average; // 平均成績   
    struct clientData* nextPtr; // 自我參考指標
};

typedef struct clientData Student;
typedef Student* StudentPtr;

// 函式原型
void insert(StudentPtr* sPtr, unsigned int ID, char Name[], int math, int computer);
void printList(StudentPtr currentPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; // 初始時，沒有學生資料
    unsigned int ID;
    char Name[15];
    int math, computer;

    instructions(); // 顯示選單

    // 讀入4筆學生資料
    for (int i = 0; i < 4; i++) {
        printf("輸入第 %d 位學生資料：\n", i + 1);
        printf("學號：");
        scanf_s("%u", &ID);

        printf("姓名：");
        fgets(Name, sizeof(Name), stdin);
        Name[strcspn(Name, "\n")] = 0; // 去掉末尾的換行符
        printf("數學成績：");
        scanf_s("%d", &math);
        printf("電腦成績：");
        scanf_s("%d", &computer);

        insert(&startPtr, ID, Name, math, computer);
    }

    printf("\n學生資料鏈結串列：\n");
    printList(startPtr);

    return 0;
}

// 顯示選單
void instructions(void) {
    puts("輸入你的選擇:\n"
        "   1 插入學生資料到鏈結串列中。\n"
        "   2 查看鏈結串列中的學生資料。\n");
}

// 根據學號插入學生資料，保持排序
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

        // 找到適當的插入位置，根據學號大小排序
        while (currentPtr != NULL && ID > currentPtr->ID) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // 如果在鏈結串列開頭插入
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // 插入到鏈結串列的中間或末尾
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("無法分配內存。\n");
    }
}

// 打印鏈結串列
void printList(StudentPtr currentPtr) {
    if (currentPtr == NULL) {
        puts("鏈結串列為空。\n");
    }
    else {
        while (currentPtr != NULL) {
            printf("學號: %u, 姓名: %s, 數學: %d, 電腦: %d, 平均: %.2f\n",
                currentPtr->ID, currentPtr->Name, currentPtr->math,
                currentPtr->computer, currentPtr->average);
            currentPtr = currentPtr->nextPtr;
        }
        puts(""); // 換行
    }
}
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

typedef struct clientData ClientData; // 定義學生結構類型
typedef ClientData* ClientDataPtr; // 定義學生指標類型

// 函式原型
void insert(ClientDataPtr* sPtr, unsigned int id, char name[], int math, int computer);
char delete(ClientDataPtr* sPtr, unsigned int id);
int isEmpty(ClientDataPtr sPtr);
void printList(ClientDataPtr currentPtr);
void instructions(void);
void calculateAverage(ClientDataPtr student);

int main(void)
{
    ClientDataPtr startPtr = NULL; // 初始時，沒有學生資料
    unsigned int id;
    int math, computer;
    char name[15];

    instructions(); // 顯示選單
    printf("%s", "? ");
    unsigned int choice; // 使用者選擇
    scanf("%u", &choice);

    // 輸入四筆學生資料並插入鏈結串列
    for (int i = 0; i < 4; i++) {
        printf("輸入第 %d 位學生資料：\n", i + 1);
        printf("學號：");
        scanf_s("%u", &id);
        getchar();  // 清除緩衝區中的換行符
        printf("姓名：");
        fgets(name, sizeof(name), stdin); // 讀取姓名，包含空格
        name[strcspn(name, "\n")] = 0; // 去掉末尾的換行符
        printf("數學成績：");
        scanf_s("%d", &math);
        printf("電腦成績：");
        scanf_s("%d", &computer);

        insert(&startPtr, id, name, math, computer); // 插入學生資料到鏈結串列
    }

    printf("\n學生資料鏈結串列：\n");
    printList(startPtr); // 列印鏈結串列的內容

    puts("End of run.");
    return 0;
}

// 顯示選單
void instructions(void)
{
    puts("Enter your choice:\n"
        "   1 to insert a student into the list.\n"
        "   2 to delete a student from the list.\n"
        "   3 to end.");
}

// 根據學號插入學生資料，保持排序
void insert(ClientDataPtr* sPtr, unsigned int id, char name[], int math, int computer)
{
    ClientDataPtr newPtr = malloc(sizeof(ClientData)); // 創建新節點

    if (newPtr != NULL) { // 檢查是否有空間
        newPtr->ID = id; // 設置學號
        strcpy_s(newPtr->Name, name); // 設置姓名
        newPtr->math = math; // 設置數學成績
        newPtr->computer = computer; // 設置電腦成績
        calculateAverage(newPtr); // 計算平均成績
        newPtr->nextPtr = NULL;

        ClientDataPtr previousPtr = NULL;
        ClientDataPtr currentPtr = *sPtr;

        // 找到適當的插入位置，根據學號排序
        while (currentPtr != NULL && id > currentPtr->ID) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        // 插入新節點到列表開頭
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // 插入新節點到列表中間或末尾
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("%u not inserted. No memory available.\n", id);
    }
}

// 刪除學生資料
char double(ClientDataPtr* sPtr, unsigned int id)
{
    if (id == (*sPtr)->ID) { // 如果是第一個節點
        ClientDataPtr tempPtr = *sPtr; // 保留被刪除的節點
        *sPtr = (*sPtr)->nextPtr; // 移除該節點
        free(tempPtr); // 釋放內存
        return id;
    }
    else {
        ClientDataPtr previousPtr = *sPtr;
        ClientDataPtr currentPtr = (*sPtr)->nextPtr;

        // 查找節點並刪除
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

// 檢查鏈結串列是否為空
int isEmpty(ClientDataPtr sPtr)
{
    return sPtr == NULL;
}

// 顯示鏈結串列
void printList(ClientDataPtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("List is empty.\n");
    }
    else {
        puts("The list is:");
        while (currentPtr != NULL) {
            printf("學號: %u, 姓名: %s, 數學: %d, 電腦: %d, 平均成績: %.2f\n",
                currentPtr->ID, currentPtr->Name, currentPtr->math,
                currentPtr->computer, currentPtr->average);
            currentPtr = currentPtr->nextPtr;
        }
        puts(""); // 換行
    }
}

// 計算學生的平均成績
void calculateAverage(ClientDataPtr student)
{
    student->average = (student->math + student->computer) / 2.0;
}

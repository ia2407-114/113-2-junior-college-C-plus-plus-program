/*題目1. 將學生結構放入範例程式碼中替代原先的結構再加上自我參考指標，透過鍵盤輸入4筆學生資料，根據學號 ID插入鏈結串列中，最後將鏈結串列的內容印出。
題目2. 承上題，透過鍵盤輸入1筆學生ID，根據學號 ID刪除鏈結串列中的對應節點，最後將鏈結串列的內容印出。*/
#include <stdio.h>
#include <stdlib.h>

// 定義學生節點結構
struct stuNode {
    int ID;                 // 學號
    char Name[15];          // 學生姓名
    int math, computer;     // 數學、電腦成績
    double average;         // 平均成績
    struct stuNode* next;   // 指向下一個節點的指標
};

struct stuNode* head = NULL; // 指向鏈結串列開頭的指標

// 讓使用者輸入學生的姓名、數學成績、電腦成績，計算平均成績，並初始化鏈結串列節點
struct stuNode* createNode() {
    struct stuNode* newNode = (struct stuNode*)malloc(sizeof(struct stuNode));
    if (!newNode) return NULL;

    printf("Enter ID (0 to stop): ");
    scanf_s("%d", &newNode->ID);
    if (newNode->ID == 0) { // 若輸入 0，則終止輸入
        free(newNode);
        return NULL;
    }
    printf("Enter Name, Math, Computer: ");
    scanf_s("%s %d %d", newNode->Name, &newNode->math, &newNode->computer);
    newNode->average = (newNode->math + newNode->computer) / 2.0;
    newNode->next = NULL;
    return newNode;
}

// 將新學生節點 (newNode) 按學號 (ID) 大小順序插入鏈結串列。
void insert(struct stuNode* newNode) {
    if (!newNode) return;
    if (!head || newNode->ID < head->ID) { // 插入到鏈結串列開頭
        newNode->next = head;
        head = newNode;
        return;
    }
    struct stuNode* cur = head;
    while (cur->next && cur->next->ID < newNode->ID) // 找到插入位置
        cur = cur->next;
    newNode->next = cur->next;
    cur->next = newNode;
}

// 刪除指定 ID 的節點
void deleteNode(int ID) {
    if (!head) return;
    struct stuNode* cur = head, * prev = NULL;
    if (head->ID == ID) { // 若刪除的是第一個節點
        head = head->next;
        free(cur);
        return;
    }
    while (cur && cur->ID != ID) { // 搜尋目標 ID
        prev = cur;
        cur = cur->next;
    }
    if (cur) { // 找到節點後刪除
        prev->next = cur->next;
        free(cur);
    }
}

// 列印鏈結串列內容
void printList() {
    struct stuNode* cur = head;
    if (!cur) {
        printf("List is empty.\n");
        return;
    }
    printf("ID   Name      Math Computer Average\n");
    while (cur) {
        printf("%d  %-10s %d   %d   %.2f\n", cur->ID, cur->Name, cur->math, cur->computer, cur->average);
        cur = cur->next;
    }
}

int main() {
    int choice, ID;
    while (1) {
        printf("1. Add Student\n2. Delete Student\n3. Exit\nChoice: ");
        scanf_s("%d", &choice);
        if (choice == 3) break; // 選擇 3 則結束程式
        if (choice == 1) {
            for (int i = 0; i < 4; i++) // 連續輸入 4 筆學生資料
                insert(createNode());
        }
        else if (choice == 2) {
            printf("Enter ID to delete: ");
            scanf_s("%d", &ID);
            deleteNode(ID);
        }
        printList(); // 顯示鏈結串列內容
    }
    return 0;
}


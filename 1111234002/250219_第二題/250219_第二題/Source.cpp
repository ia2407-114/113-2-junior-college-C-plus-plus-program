/*題目2.  根據學號 ID，透過鍵盤將資料寫入檔案中*/

#include <stdio.h>

// 定義學生結構體
typedef struct student {
    int ID;           // 學生學號
    char name[20];    // 學生姓名，最多 20 個字元
    int math;         // 數學成績
    int comput;       // 計算機成績
    float AVG;        // 學生的平均成績
} stu;

int main() {
    stu s;  // 創建一個學生結構體變數 s是一個學生
    FILE* fp;

    // 開啟檔案以寫入模式
    fp = fopen("student_data.txt", "a"); // "a" 以附加模式開啟檔案 不會被覆蓋

    if (fp == NULL) {
        // 若檔案無法開啟，顯示錯誤並結束程式
        printf("無法開啟檔案\n");
        return 1;
    }

    // 輸入學生資料
    printf("請輸入學生學號: ");
    scanf_s("%d", &s.ID);

    printf("請輸入學生姓名: ");
    scanf_s("%s", s.name);

    printf("請輸入數學成績: ");
    scanf_s("%d", &s.math);

    printf("請輸入計算機成績: ");
    scanf_s("%d", &s.comput);

    // 計算學生平均成績
    s.AVG = (s.math + s.comput) / 2.0;

    // 顯示學生資料
    printf("\n學生資料:\n");
    printf("學號: %d\n", s.ID);
    printf("姓名: %s\n", s.name);
    printf("數學成績: %d\n", s.math);
    printf("計算機成績: %d\n", s.comput);
    printf("平均成績: %.2f\n", s.AVG);

    // 將資料寫入檔案
    fprintf(fp, "學號: %d, 姓名: %s, 數學成績: %d, 計算機成績: %d, 平均成績: %.2f\n",
        s.ID, s.name, s.math, s.comput, s.AVG);

    // 關閉檔案
    fclose(fp);

    return 0;
}

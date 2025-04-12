#include <stdio.h>

typedef struct student {   // 定義結構
    int     ID;
    char    name[20];
    int     math, computer;
    double  avg;
} stu;

int main(void)
{
    FILE* cfPtr = NULL; // 檔案指標

    // 嘗試開啟檔案，若開啟失敗則顯示錯誤訊息並結束程式
    if (fopen_s(&cfPtr, "student.dat", "rb") != 0) {
        puts("File could not be opened.");
    }

    printf("%6s%16s%11s%11s%10s\n", "學號", "姓名", "數學成績", "電腦成績", "平均成績");

    // 讀取並顯示檔案內容

    while (!feof(cfPtr)) {
        stu student;

        int result = fread(&student, sizeof(stu), 1, cfPtr);
        if (result != 0 && student.ID != 0) {
            printf("%6d%-16s%-11d%-11d%10.2f\n",
                student.ID, student.name, student.math, student.computer, student.avg);
        }
    }

    fclose(cfPtr); // 關閉檔案
    return 0;
}
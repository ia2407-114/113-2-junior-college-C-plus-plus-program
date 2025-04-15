#include <stdio.h>
void main()
{
    FILE* fp;  /* 宣告變數 */
    char fname[20] = "student3.txt";
    int id, math, comput;
    char name[20] = "";
    double avg;
    if (fopen_s(&fp, fname, "w") != 0) { //fopen_s成功建立並且開啟回傳值為0
        puts("File could not be opened");
    }
    else {
        printf("請輸入id, name, math, comput:");
        scanf_s("%d%8s%8d%8d", &id, name, 19, &math, &comput);
        avg = (float)(math + comput) / 2;

        printf("開始寫入檔案%s..\n", fname);
        fprintf(fp, "%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");

        fprintf(fp, "%d%8s%8d%8d  %fl", id, name, math, comput, avg);
        printf("寫入檔案結束!\n");
    }
    /* 格式化輸出檔案內容 */
    fclose(fp); /* 關閉檔案 */
    if (fopen_s(&fp, fname, "r") != 0) { //fopen_s成功建立並且開啟回傳值為0
        puts("File could not be opened");
    }
    else {
        if (fp != NULL)
        {
            printf("檔案內容: \n");
            printf("%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");
            printf("%d%8s%8d%8d  %lf\n", id, name, math, comput, avg);
            fclose(fp);
        }
        else {
            printf("錯誤: 檔案開啟錯誤..\n");
        }
    }
}
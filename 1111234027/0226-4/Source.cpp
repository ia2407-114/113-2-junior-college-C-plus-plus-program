#include <stdio.h>

int main()
{
    FILE fp; / 宣告變數* /
    char fname[20] = "phones.txt";
    char str0[50] = "iPhone 11";
    char str1[50] = "iPhone 12";
    char str2[50] = "iPhone X";
    fp = fopen(fname, "w");   /* 開啟寫入檔案 */
    printf("開始寫入檔案%s..\n", fname);
    /* 格式化輸出檔案內容 */
    fprintf(fp, "%d=> %s\n", 1, str0);
    fprintf(fp, "%d=> %s\n", 2, str1);
    fprintf(fp, "%d=> %s\n", 3, str2);
    printf("寫入檔案結束!\n");
    fclose(fp); /* 關閉檔案 */
    fp = fopen(fname, "r");   /* 開啟讀取檔案 */
    if (fp != NULL)         /* 讀取檔案 */
    {
        printf("檔案內容: \n");
        while (fscanf(fp, "%s", str0) != EOF)
        {
            printf("%s\n", str0);
        }
        fclose(fp); /* 關閉檔案 */
    }
    else
        printf("錯誤: 檔案開啟錯誤..\n");

    return 0;
}
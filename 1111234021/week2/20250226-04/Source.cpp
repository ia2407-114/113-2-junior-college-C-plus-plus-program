#include <stdio.h>

int main()
{
    FILE* fp;  /* 宣告變數 */
    char student[20] = "student.txt";
    char stu0[50] = "hahaha";
    char stu1[50] = "80";
    fopen_s(&fp, student, "w") != 0;
    printf("開始寫入檔案 %s...\n", student);

    fprintf(fp, "%d => %s\n", 1, stu0);
    fprintf(fp, "%d => %s\n", 2, stu1);
    printf("寫入檔案結束!\n");
    fclose(fp); 

    fopen_s(&fp, student, "w") != 0;
    printf("檔案內容: \n");
    while (fgets(stu0, sizeof(stu0), fp) != NULL) {
        printf("%s", stu0);
    }
    fclose(fp); 
    return 0;
}

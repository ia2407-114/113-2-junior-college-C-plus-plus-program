
#include <stdio.h>

typedef struct student {   // 定義結構
    int     ID;
    char    name[20];
    int     math, computer;
    double  avg;
} stu;

int main(void)
{
    FILE* cfPtr = NULL;
    if (fopen_s(&cfPtr, "student.dat", "rb") != 0) {
        puts("File could not be opened.");
        return 1;
    }
    int studentID;
    printf("請輸入要查詢的學號: ");
    scanf("%d", &studentID);

    int found = 0;
    stu student;
    while (fread(&student, sizeof(stu), 1, cfPtr) == 1) {
        if (student.ID == studentID) {
            printf("找到學生:\n");
            printf("%-6s%-16s%-11s%-11s%10s\n", "學號", "姓名", "數學成績", "電腦成績", "平均成績");
            printf("%6d%-16s%-11d%-11d%10.2f\n",
                student.ID, student.name, student.math, student.computer, student.avg);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到學號 %d 的學生。\n", studentID);
    }
    fclose(cfPtr);
    return 0;
}
  
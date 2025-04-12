
#include <stdio.h>

typedef struct student {   // �w�q���c
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
    printf("�п�J�n�d�ߪ��Ǹ�: ");
    scanf("%d", &studentID);

    int found = 0;
    stu student;
    while (fread(&student, sizeof(stu), 1, cfPtr) == 1) {
        if (student.ID == studentID) {
            printf("���ǥ�:\n");
            printf("%-6s%-16s%-11s%-11s%10s\n", "�Ǹ�", "�m�W", "�ƾǦ��Z", "�q�����Z", "�������Z");
            printf("%6d%-16s%-11d%-11d%10.2f\n",
                student.ID, student.name, student.math, student.computer, student.avg);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("�����Ǹ� %d ���ǥ͡C\n", studentID);
    }
    fclose(cfPtr);
    return 0;
}
  
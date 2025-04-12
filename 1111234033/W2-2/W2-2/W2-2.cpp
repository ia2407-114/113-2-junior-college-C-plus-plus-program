#include <stdio.h>

typedef struct student {   // �w�q���c
    int     ID;
    char    name[20];
    int     math, computer;
    double  avg;
} stu;

int main(void)
{
    FILE* cfPtr = NULL; // �ɮ׫���

    // ���ն}���ɮסA�Y�}�ҥ��ѫh��ܿ��~�T���õ����{��
    if (fopen_s(&cfPtr, "student.dat", "rb") != 0) {
        puts("File could not be opened.");
    }

    printf("%6s%16s%11s%11s%10s\n", "�Ǹ�", "�m�W", "�ƾǦ��Z", "�q�����Z", "�������Z");

    // Ū��������ɮפ��e

    while (!feof(cfPtr)) {
        stu student;

        int result = fread(&student, sizeof(stu), 1, cfPtr);
        if (result != 0 && student.ID != 0) {
            printf("%6d%-16s%-11d%-11d%10.2f\n",
                student.ID, student.name, student.math, student.computer, student.avg);
        }
    }

    fclose(cfPtr); // �����ɮ�
    return 0;
}
#include <stdio.h>
typedef struct student {   //�w�q���c
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;
int main(void)
{
    FILE* cfPtr = NULL; //�إ��ɮ׫���
    //�}���ɮ�
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) 
    {
        puts("File could not be opened.");
    }
    else
    {
        stu blankClient = { 0, "", 0, 0, 0.0 };  
                for (unsigned int i = 1; i <= 100; ++i)
        {
            fwrite(&blankClient, sizeof(stu), 1, cfPtr); //�s���ɮ�
        }
                fclose(cfPtr); //�����ɮ�
    }
}

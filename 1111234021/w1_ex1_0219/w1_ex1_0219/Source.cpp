#include <stdio.h>
typedef struct student {   //定義結構
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;
int main(void)
{
    FILE* cfPtr = NULL; //建立檔案指標
    //開啟檔案
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) 
    {
        puts("File could not be opened.");
    }
    else
    {
        stu blankClient = { 0, "", 0, 0, 0.0 };  
                for (unsigned int i = 1; i <= 100; ++i)
        {
            fwrite(&blankClient, sizeof(stu), 1, cfPtr); //存取檔案
        }
                fclose(cfPtr); //關閉檔案
    }
}

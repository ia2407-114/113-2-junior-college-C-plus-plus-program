#include <stdio.h>

//type 類型 define 定義 合起來typrdef
typedef struct student {
    char name[20];
    int id;
    int math;
    int computer;
    float avg;
}stu;

int main(void)
{
    FILE* cfPtr = NULL; 

    if (fopen_s(&cfPtr, "score.dat", "wb") != 0) 
    {
        puts("檔案開啟失敗");
        return 1;
    }

    stu blankClient = { "", 0, 0, 0, 0.0 };
 
    for (unsigned int i = 0; i < 100; ++i) //unsigned 是沒有負數的整數 = size_t
    {
        size_t result = fwrite(&blankClient, sizeof(struct student), 1, cfPtr); //寫什麼(以二進制寫)、大小、幾筆、寫哪
        if (result != 1) 
        {
            puts("寫入錯誤");
            fclose(cfPtr);
            return 1;
        }
    }

    fclose(cfPtr);

    puts("建立成功");

    return 0;
}
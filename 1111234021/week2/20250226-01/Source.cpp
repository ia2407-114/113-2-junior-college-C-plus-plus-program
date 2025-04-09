#include <stdio.h>         
typedef struct student {   //定義結構
    int     ID;
    char    name[20];
    int     math, comput;
    double avg;
}stu;

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "student.dat", "rb+")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        stu blankClient = { 0, "", 0,0 };
        // output 100 blank records to file     
        printf("請輸入要輸入的學生(1~100位學生，打0結束)\n");
        scanf_s("%d", &blankClient.ID);
        while (blankClient.ID != 0) {
            printf("請輸入姓名\n");
            scanf_s( "%s", blankClient.name, 20);
            printf("請輸入數學成績\n");
            scanf_s( "%d", &blankClient.math);
            printf("請輸入電腦成績\n");
            scanf_s( "%d", &blankClient.comput);
            blankClient.avg = (blankClient.math + blankClient.comput) / 2;
            fseek(cfPtr, (blankClient.ID - 1) * sizeof(struct student), SEEK_SET);
            fwrite(&blankClient, sizeof(stu), 1, cfPtr);
            printf("要輸入的學生:");
            scanf_s("%d", &blankClient.ID);
        }
        fclose(cfPtr); // fclose closes the file
    }
}
#include <stdio.h>

typedef struct clientData
{
    unsigned int ID;
    char Name[15];
    int math, computer;
    double avg;
};

int main(void)
{
    FILE* cfPtr;
    typedef struct clientData stu;

    if (fopen_s(&cfPtr, "score.dat", "wb+") != 0)
    {
        puts("檔案開啟失敗");
    }
    else
    {
        stu client = { 0, "", 0,0, 0.0 };

        printf("%s", "輸入學號 (1-100):");
        scanf_s("%d", &client.ID);

        while (client.ID != 0)
        {
            printf("%s", "輸入姓名、數學成績、電腦成績:");

            scanf_s("%14s%9d%9d", client.Name, 14, &client.math, &client.computer);

            client.avg = (float)(client.math + client.computer) / 2;

            fseek(cfPtr, (client.ID - 1) * sizeof(struct clientData), SEEK_SET);

            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            printf("%s", "輸入學號:");
            scanf_s("%d", &client.ID);
        }
        fclose(cfPtr);
    }
}
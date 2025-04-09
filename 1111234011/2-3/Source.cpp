#include <stdio.h>
          
typedef struct clientData 
{
    unsigned int ID;
    char Name[15]; 
    int math, computer;
    double avg;  
}stu;

int main(void)
{
    FILE* cfPtr;
    int target = 0;

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

        fseek(cfPtr, 0, SEEK_SET);

        while (!feof(cfPtr))
        {
            stu client_r = { 0, "", 0,0, 0.0 };
            int result = fread(&client_r, sizeof(stu), 1, cfPtr);

            if (result != 0)
            {
                printf("\n%10d%10s%10d%10d%30lf\n", client_r.ID, client_r.Name, client_r.math, client_r.computer, client_r.avg);
            }
        }

        puts("\n輸入想尋找的學號:");
        scanf_s("%d", &target);
        fseek(cfPtr, (target - 1) * sizeof(struct clientData), SEEK_SET);
        stu client_r = { 0, "", 0,0, 0.0 };
        int result = fread(&client_r, sizeof(stu), 1, cfPtr);

        if (result != 0)
        {
            printf("\n%10d%10s%10d%10d%30lf\n", client_r.ID, client_r.Name, client_r.math, client_r.computer, client_r.avg);
        }
        else
        {
            puts("\n該筆資料不存在\n");
        }
        fclose(cfPtr); 
    }
}
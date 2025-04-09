/*題目2.  利用第二個程式碼，將學生的資料完整印出*/
#include <stdio.h>

// 定義學生資料結構
struct studentData {
    int ID;       // 學生學號
    char lastName[15];     // 姓氏（最多 14 個字元）
    char firstName[10];    // 名字（最多 9 個字元）
    int math;              // 數學成績
    int comput;            // 計算機成績
    float avg;             // 平均成績
} stu;

int main(void) {
    FILE* cfPtr; // studentData.dat 檔案指標

    // 開啟檔案（寫入模式，使用二進位格式）
    if (fopen_s(&cfPtr, "studentData.dat", "wb+") != 0) {
        puts("無法開啟檔案");
        return 1;
    }

    printf("輸入學號：");
    scanf_s("%d", &stu.ID);
    printf("輸入姓氏：");
    scanf_s("%14s", stu.lastName, (unsigned int)sizeof(stu.lastName));
    printf("輸入名字：");
    scanf_s("%9s", stu.firstName, (unsigned int)sizeof(stu.firstName));
    printf("輸入數學：");
    scanf_s("%d", &stu.math);
    printf("輸入計算機：");
    scanf_s("%d", &stu.comput);

    // 計算平均
    stu.avg = (float)(stu.math + stu.comput) / 2;

    // 使用 fwrite 寫入二進位資料
    fwrite(&stu, sizeof(struct studentData), 1, cfPtr);
    fclose(cfPtr);

    // 開啟檔案（讀取模式，使用二進位格式）
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("無法開啟檔案");
        return 1;
    }

    // 顯示標題行
    printf("%-6s%-16s%-11s%-10s%-10s%-10s\n", "學號", "姓氏", "名字", "數學", "計算機", "平均");

    // 讀取所有資料
    while (fread(&stu, sizeof(struct studentData), 1, cfPtr) == 1) {
        printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
            stu.ID, stu.lastName, stu.firstName,
            stu.math, stu.comput, stu.avg);
    }

    fclose(cfPtr); // 關閉檔案
    return 0;
}

/*原檔// Fig. 11.14: fig11_14.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition               
struct clientData {
    unsigned int acctNum; // account number     
    char lastName[15]; // account last name     
    char firstName[10]; // account first name   
    double balance; // account balance            
};

int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((cfPtr = fopen("accounts.dat", "rb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name",
            "First Name", "Balance");

        // read all records from file (until eof)
        while (!feof(cfPtr)) {
            // create clientData with default information
            struct clientData client = { 0, "", "", 0.0 };

            int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

            // display record
            if (result != 0 && client.acctNum != 0) {
                printf("%-6d%-16s%-11s%10.2f\n",
                    client.acctNum, client.lastName,
                    client.firstName, client.balance);
            }
        }

        fclose(cfPtr); // fclose closes the file
    }
}*/

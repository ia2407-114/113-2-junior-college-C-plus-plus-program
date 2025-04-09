/*題目3. 根據前面兩題所建立的資料檔案，
寫一個程式，輸入學號後，若學號存在且不為0，
則印出該筆完整的資料，否則印出"該筆資料不存在"的訊息。*/
#include <stdio.h>

// 定義學生資料結構
struct studentData {
    unsigned int ID;       // 學生學號
    char lastName[15];     // 姓氏
    char firstName[10];    // 名字
    int math;              // 數學成績
    int comput;            // 計算機成績
    float avg;             // 平均成績
};

// 函式宣告
void writeStudentData(); // 寫入學生資料
void searchStudentData(); // 查詢學生資料

int main(void) {
    int choice;

    while (1) {
        // 提供選單
        printf("\n--- 學生資料管理系統 ---\n");
        printf("1. 寫入學生資料\n");
        printf("2. 查詢學生資料\n");
        printf("3. 離開\n");
        printf("請選擇 (1-3): ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            writeStudentData();
            break;
        case 2:
            searchStudentData();
            break;
        case 3:
            printf("程式結束。\n");
            return 0;
        default:
            printf("請輸入有效的選擇！\n");
        }
    }
}

// **寫入學生資料**
void writeStudentData() {
    FILE* cfPtr;

    // 開啟檔案 (寫入模式)
    if (fopen_s(&cfPtr, "studentData.dat", "wb") != 0) {
        puts("無法開啟檔案！");
        return;
    }

    // 定義幾個學生資料
    struct studentData students[] = {
        {1001, "Wang", "XiaoMing", 85, 90, (85 + 90) / 2.0},
        {1002, "Chen", "Hua", 78, 88, (78 + 88) / 2.0},
        {1003, "Lin", "YuQi", 92, 95, (92 + 95) / 2.0}
    };

    // 將學生資料寫入檔案
    for (int i = 0; i < 3; i++) {
        fwrite(&students[i], sizeof(struct studentData), 1, cfPtr);
    }

    puts("學生資料已成功寫入！");
    fclose(cfPtr); // 關閉檔案
}

// **查詢學生資料**
void searchStudentData() {
    FILE* cfPtr;
    unsigned int inputID;
    int found = 0;

    // 開啟檔案 (讀取模式)
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("檔案不存在，請先寫入學生資料！");
        return;
    }

    // 輸入學號
    printf("請輸入要查詢的學號: ");
    scanf_s("%u", &inputID);

    // 如果學號為 0，則提示資料不存在
    if (inputID == 0) {
        printf("該筆資料不存在。\n");
    }
    else {
        // 讀取檔案中的資料並比對學號
        while (1) {
            struct studentData student = { 0, "", "", 0, 0, 0.0 };

            // 讀取一筆資料
            int result = fread(&student, sizeof(struct studentData), 1, cfPtr);

            // 如果讀取成功且學號匹配，顯示資料
            if (result == 1 && student.ID != 0) {
                if (student.ID == inputID) {
                    printf("\n%-6s%-16s%-11s%-10s%-10s%-10s\n",
                        "ID", "Last Name", "First Name", "Math", "Comput", "Average");
                    printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
                        student.ID, student.lastName, student.firstName,
                        student.math, student.comput, student.avg);
                    found = 1;
                    break; // 找到資料後停止搜尋
                }
            }
            else if (result != 1) {
                break; // 如果沒有更多資料，跳出迴圈
            }
        }

        // 如果沒有找到該學號的資料，顯示提示訊息
        if (!found) {
            printf("該筆資料不存在。\n");
        }
    }

    fclose(cfPtr); // 關閉檔案
}

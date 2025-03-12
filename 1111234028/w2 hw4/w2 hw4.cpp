#include <stdio.h>

typedef struct clientData {
	unsigned int ID;    // 學生 ID
	char Name[15];      // 姓名
	int math, computer; // 數學與電腦成績
	double AVG;         // 平均成績
} stu;

void EnterData();
void ReadData();

int main(void) {
	int choice;
	do {
		printf("\n選擇功能：\n");
		printf("1. 輸入學生資料\n");
		printf("2. 讀取並顯示學生資料\n");
		printf("0. 退出\n");
		printf("請輸入選項: ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			EnterData();
			break;
		case 2:
			ReadData();
			break;
		case 0:
			printf("退出程式。\n");
			break;
		default:
			printf("無效選項，請重新輸入。\n");
		}
	} while (choice != 0);

}

// 輸入學生資料並寫入檔案
void EnterData() {
	FILE* cfPtr = NULL; // accounts.dat file pointer


	// fopen opens the file; exits if file cannot be opened
	if (fopen_s(&cfPtr, "student.dat", "wb") != 0) {
		puts("File could not be opened.\n");
	}
	else {

		stu client = { 0, "", 0, 0, 0.0 };

		printf("輸入學生 ID (1-100, 0 結束輸入): ");
		scanf_s("%u", &client.ID);

		while (client.ID != 0) {
			printf("輸入姓名 數學成績 電腦成績: ");
			scanf_s("%s%d%d", client.Name, 14, &client.math, &client.computer);
			client.AVG = (client.math + client.computer) / 2.0; // 計算平均成績

			fseek(cfPtr, (client.ID - 1) * sizeof(clientData), SEEK_SET);
			fwrite(&client, sizeof(clientData), 1, cfPtr);

			printf("輸入學生 ID (0 結束輸入): ");
			scanf_s("%u", &client.ID);
		}

		fclose(cfPtr);
	}
}

// 讀取並顯示學生資料
void ReadData() {
	FILE* cfPtr = NULL; // accounts.dat file pointer


	// fopen opens the file; exits if file cannot be opened
	if (fopen_s(&cfPtr, "student.dat", "rb") != 0) {
		puts("File could not be opened.\n");
	}
	else {

		printf("\n%-10s%-15s%-10s%-10s%-10s\n", "ID", "姓名", "數學", "電腦", "平均");
		printf("--------------------------------------------------\n");

		while (!feof(cfPtr)) {

			stu client = { 0, "",0,0, 0.0 };
			int result = fread(&client, sizeof(clientData), 1, cfPtr);

			if (result != 0 && client.ID != 0) {
				printf("%6d%14s%13d%10d%20lf\n",
					client.ID, client.Name, client.math, client.computer, client.AVG);
			}
		}


		fclose(cfPtr);
	}
}
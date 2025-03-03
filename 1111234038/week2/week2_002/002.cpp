#include <stdio.h>

typedef struct student {
	int id;
	char name[20];
	int math, comput;
	double avg;
} stu;

void main(void)
{
	FILE* cfPtr;

	// 第一題
	if (fopen_s(&cfPtr, "stu001.dat", "rb+") != 0) { //fopen_s成功建立並且開啟回傳值為0
		puts("File could not be opened");
	}
	else {
		stu stuData = { 0, "", 0, 0, 0.0 };

		printf("請輸入ID:");
		scanf_s("%d", &stuData.id);

		while (stuData.id != 0) {
			printf("請輸入name, math, comput:");
			scanf_s("%s%8d%8d", stuData.name, 19, &stuData.math, &stuData.comput);

			stuData.avg = (double)(stuData.math + stuData.comput) / 2;

			fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);

			fwrite(&stuData, sizeof(stu), 1, cfPtr);

			printf("請輸入ID:");
			scanf_s("%d", &stuData.id);

		}
		fclose(cfPtr);
	}


	//第二題
	if (fopen_s(&cfPtr, "stu001.dat", "rb") != 0) { //fopen_s成功建立並且開啟回傳值為0
		puts("File could not be opened (第二題)");
	}
	else {
		printf("%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");

		while (!feof(cfPtr)) {
			stu readData = { 0, "", 0, 0, 0.0 };

			int result = fread(&readData, sizeof(stu), 1, cfPtr);

			if (result != 0 && readData.id != 0) {
				printf("%d%8s%8d%8d  %lf\n",
					readData.id, readData.name, readData.math, readData.comput, readData.avg);
			}
		}

		fclose(cfPtr);
	}


	
}
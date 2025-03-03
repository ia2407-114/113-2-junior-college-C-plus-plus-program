#include <stdio.h>
typedef struct student {
	int id;
	char name[20];
	int math, comput;
	float avg;
} stu;
int main(void)
{
	FILE* cfPtr; //建立檔案指標
	stu stuData = { 0, "", 0, 0, 0.0 };

	if (fopen_s(&cfPtr, "stu001.dat", "wb") != 0) { //fopen_s成功建立並且開啟回傳值為0
		puts("File could not be opened");
	}
	else {
		printf("請輸入學生ID:");
		scanf_s("%d", &stuData.id);

		while (stuData.id != 0)
		{
			printf("%s", "請輸入name, math, comput:");
			fscanf_s(stdin, "%s", stuData.name, 20);
			fscanf_s(stdin, "%d", &stuData.math);
			fscanf_s(stdin, "%d", &stuData.comput);
			stuData.avg = (stuData.math + stuData.comput) / 2;
			fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);
			fwrite(&stuData, sizeof(stu), 1, cfPtr);
		    printf("%s", "輸入學生ID:");
			scanf_s("%d", &stuData.id);
		}
				fclose(cfPtr);
	}
}
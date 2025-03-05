// 題目2.  利用第二個程式碼，將學生的資料完整印出
#include <stdio.h>
typedef struct student {
	int id;
	char name[20];
	int math, comput;
	float avg;
} stu;
int main(void)
{
	FILE* cfPtr;
	stu stuData = { 0, "", 0, 0, 0.0 };

	if (fopen_s(&cfPtr, "stu001.dat", "rb") != 0)
	{ //fopen_s成功建立並且開啟回傳值為0
		puts("File could not be opened");
	}
	else {
		printf(" id ,  name , math , comput , avg\n");
		while (!feof(cfPtr))
		{
			stu stuData = { 0, "", 0, 0, 0.0 };
			int result = fread(&stuData, sizeof(stu), 1, cfPtr);
			if (result != 0 && stuData.id != 0)
			{
				printf(" %d%7s%7d%7d%10.2f\n", stuData.id, stuData.name, stuData.math, stuData.comput, stuData.avg);
			}
		}
		fclose(cfPtr);
	}
}
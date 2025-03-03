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

	if (fopen_s(&cfPtr, "stu001.dat", "rb+") != 0) { //fopen_s���\�إߨåB�}�Ҧ^�ǭȬ�0
		puts("File could not be opened");
	}
	else {
		stu stuData = {0, "", 0, 0, 0.0};

		printf("�п�JID:");
		scanf_s("%d", &stuData.id);

		while (stuData.id != 0) {
			printf("�п�Jname, math, comput:");
			scanf_s("%s%8d%8d", stuData.name, 19, &stuData.math, &stuData.comput);

			stuData.avg = (stuData.math + stuData.comput) / 2;

			fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);

			fwrite(&stuData, sizeof(stu), 1, cfPtr);

			printf("�п�JID:");
			scanf_s("%d", &stuData.id);
		}

		fclose(cfPtr);
	}
}
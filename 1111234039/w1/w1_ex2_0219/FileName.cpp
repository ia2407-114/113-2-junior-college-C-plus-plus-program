#include <stdio.h>
typedef struct student {
	int id;
	char name[20];
	int math, comput;
	float avg;
} stu;
int main(void)
{
	FILE* cfPtr; //�إ��ɮ׫���
	stu stuData = { 0, "", 0, 0, 0.0 };

	if (fopen_s(&cfPtr, "stu001.dat", "wb") != 0) { //fopen_s���\�إߨåB�}�Ҧ^�ǭȬ�0
		puts("File could not be opened");
	}
	else {
		printf("�п�J�ǥ�ID:");
		scanf_s("%d", &stuData.id);

		while (stuData.id != 0)
		{
			printf("%s", "�п�Jname, math, comput:");
			fscanf_s(stdin, "%s", stuData.name, 20);
			fscanf_s(stdin, "%d", &stuData.math);
			fscanf_s(stdin, "%d", &stuData.comput);
			stuData.avg = (stuData.math + stuData.comput) / 2;
			fseek(cfPtr, (stuData.id - 1) * sizeof(stu), SEEK_SET);
			fwrite(&stuData, sizeof(stu), 1, cfPtr);
		    printf("%s", "��J�ǥ�ID:");
			scanf_s("%d", &stuData.id);
		}
				fclose(cfPtr);
	}
}
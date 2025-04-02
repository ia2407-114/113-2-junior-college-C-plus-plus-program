#include <stdio.h>

typedef struct student {
	int id;
	char name[50];
	int math, comput;
	double avg;
} stu;

void main(void)
{
	FILE* cfPtr;

	//�ĤG�D
	if (fopen_s(&cfPtr, "stu001.dat", "rb") != 0) { //fopen_s���\�إߨåB�}�Ҧ^�ǭȬ�0
		puts("File could not be opened (�ĤG�D)");
	}
	else {
		int searchId = 0;
		// printf("%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");
		printf("�п�J�n��M��ƪ�ID:");
		scanf_s("%d", &searchId);

		while (!feof(cfPtr)) {
			stu readData = { 0, "", 0, 0, 0.0 };

			int result = fread(&readData, sizeof(stu), 1, cfPtr);

			if (result != 0 && readData.id != 0) {
				if (readData.id == searchId) {
					printf("%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");
					printf("%d%8s%8d%8d  %lf\n",
						readData.id, readData.name, readData.math, readData.comput, readData.avg);
				}
			}
		}

		fclose(cfPtr);
	}



}
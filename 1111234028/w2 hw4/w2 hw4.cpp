#include <stdio.h>

typedef struct clientData {
	unsigned int ID;    // �ǥ� ID
	char Name[15];      // �m�W
	int math, computer; // �ƾǻP�q�����Z
	double AVG;         // �������Z
} stu;

void EnterData();
void ReadData();

int main(void) {
	int choice;
	do {
		printf("\n��ܥ\��G\n");
		printf("1. ��J�ǥ͸��\n");
		printf("2. Ū������ܾǥ͸��\n");
		printf("0. �h�X\n");
		printf("�п�J�ﶵ: ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			EnterData();
			break;
		case 2:
			ReadData();
			break;
		case 0:
			printf("�h�X�{���C\n");
			break;
		default:
			printf("�L�Ŀﶵ�A�Э��s��J�C\n");
		}
	} while (choice != 0);

}

// ��J�ǥ͸�ƨüg�J�ɮ�
void EnterData() {
	FILE* cfPtr = NULL; // accounts.dat file pointer


	// fopen opens the file; exits if file cannot be opened
	if (fopen_s(&cfPtr, "student.dat", "wb") != 0) {
		puts("File could not be opened.\n");
	}
	else {

		stu client = { 0, "", 0, 0, 0.0 };

		printf("��J�ǥ� ID (1-100, 0 ������J): ");
		scanf_s("%u", &client.ID);

		while (client.ID != 0) {
			printf("��J�m�W �ƾǦ��Z �q�����Z: ");
			scanf_s("%s%d%d", client.Name, 14, &client.math, &client.computer);
			client.AVG = (client.math + client.computer) / 2.0; // �p�⥭�����Z

			fseek(cfPtr, (client.ID - 1) * sizeof(clientData), SEEK_SET);
			fwrite(&client, sizeof(clientData), 1, cfPtr);

			printf("��J�ǥ� ID (0 ������J): ");
			scanf_s("%u", &client.ID);
		}

		fclose(cfPtr);
	}
}

// Ū������ܾǥ͸��
void ReadData() {
	FILE* cfPtr = NULL; // accounts.dat file pointer


	// fopen opens the file; exits if file cannot be opened
	if (fopen_s(&cfPtr, "student.dat", "rb") != 0) {
		puts("File could not be opened.\n");
	}
	else {

		printf("\n%-10s%-15s%-10s%-10s%-10s\n", "ID", "�m�W", "�ƾ�", "�q��", "����");
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
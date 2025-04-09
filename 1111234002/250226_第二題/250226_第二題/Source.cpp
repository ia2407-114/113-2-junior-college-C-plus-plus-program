/*�D��2.  �Q�βĤG�ӵ{���X�A�N�ǥͪ���Ƨ���L�X*/
#include <stdio.h>

// �w�q�ǥ͸�Ƶ��c
struct studentData {
    int ID;       // �ǥ;Ǹ�
    char lastName[15];     // �m��]�̦h 14 �Ӧr���^
    char firstName[10];    // �W�r�]�̦h 9 �Ӧr���^
    int math;              // �ƾǦ��Z
    int comput;            // �p������Z
    float avg;             // �������Z
} stu;

int main(void) {
    FILE* cfPtr; // studentData.dat �ɮ׫���

    // �}���ɮס]�g�J�Ҧ��A�ϥΤG�i��榡�^
    if (fopen_s(&cfPtr, "studentData.dat", "wb+") != 0) {
        puts("�L�k�}���ɮ�");
        return 1;
    }

    printf("��J�Ǹ��G");
    scanf_s("%d", &stu.ID);
    printf("��J�m��G");
    scanf_s("%14s", stu.lastName, (unsigned int)sizeof(stu.lastName));
    printf("��J�W�r�G");
    scanf_s("%9s", stu.firstName, (unsigned int)sizeof(stu.firstName));
    printf("��J�ƾǡG");
    scanf_s("%d", &stu.math);
    printf("��J�p����G");
    scanf_s("%d", &stu.comput);

    // �p�⥭��
    stu.avg = (float)(stu.math + stu.comput) / 2;

    // �ϥ� fwrite �g�J�G�i����
    fwrite(&stu, sizeof(struct studentData), 1, cfPtr);
    fclose(cfPtr);

    // �}���ɮס]Ū���Ҧ��A�ϥΤG�i��榡�^
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("�L�k�}���ɮ�");
        return 1;
    }

    // ��ܼ��D��
    printf("%-6s%-16s%-11s%-10s%-10s%-10s\n", "�Ǹ�", "�m��", "�W�r", "�ƾ�", "�p���", "����");

    // Ū���Ҧ����
    while (fread(&stu, sizeof(struct studentData), 1, cfPtr) == 1) {
        printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
            stu.ID, stu.lastName, stu.firstName,
            stu.math, stu.comput, stu.avg);
    }

    fclose(cfPtr); // �����ɮ�
    return 0;
}

/*����// Fig. 11.14: fig11_14.c
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

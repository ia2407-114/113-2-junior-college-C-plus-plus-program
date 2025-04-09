/*�D��3. �ھګe�����D�ҫإߪ�����ɮסA
�g�@�ӵ{���A��J�Ǹ���A�Y�Ǹ��s�b�B����0�A
�h�L�X�ӵ����㪺��ơA�_�h�L�X"�ӵ���Ƥ��s�b"���T���C*/
#include <stdio.h>

// �w�q�ǥ͸�Ƶ��c
struct studentData {
    unsigned int ID;       // �ǥ;Ǹ�
    char lastName[15];     // �m��
    char firstName[10];    // �W�r
    int math;              // �ƾǦ��Z
    int comput;            // �p������Z
    float avg;             // �������Z
};

// �禡�ŧi
void writeStudentData(); // �g�J�ǥ͸��
void searchStudentData(); // �d�߾ǥ͸��

int main(void) {
    int choice;

    while (1) {
        // ���ѿ��
        printf("\n--- �ǥ͸�ƺ޲z�t�� ---\n");
        printf("1. �g�J�ǥ͸��\n");
        printf("2. �d�߾ǥ͸��\n");
        printf("3. ���}\n");
        printf("�п�� (1-3): ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            writeStudentData();
            break;
        case 2:
            searchStudentData();
            break;
        case 3:
            printf("�{�������C\n");
            return 0;
        default:
            printf("�п�J���Ī���ܡI\n");
        }
    }
}

// **�g�J�ǥ͸��**
void writeStudentData() {
    FILE* cfPtr;

    // �}���ɮ� (�g�J�Ҧ�)
    if (fopen_s(&cfPtr, "studentData.dat", "wb") != 0) {
        puts("�L�k�}���ɮסI");
        return;
    }

    // �w�q�X�Ӿǥ͸��
    struct studentData students[] = {
        {1001, "Wang", "XiaoMing", 85, 90, (85 + 90) / 2.0},
        {1002, "Chen", "Hua", 78, 88, (78 + 88) / 2.0},
        {1003, "Lin", "YuQi", 92, 95, (92 + 95) / 2.0}
    };

    // �N�ǥ͸�Ƽg�J�ɮ�
    for (int i = 0; i < 3; i++) {
        fwrite(&students[i], sizeof(struct studentData), 1, cfPtr);
    }

    puts("�ǥ͸�Ƥw���\�g�J�I");
    fclose(cfPtr); // �����ɮ�
}

// **�d�߾ǥ͸��**
void searchStudentData() {
    FILE* cfPtr;
    unsigned int inputID;
    int found = 0;

    // �}���ɮ� (Ū���Ҧ�)
    if (fopen_s(&cfPtr, "studentData.dat", "rb") != 0) {
        puts("�ɮפ��s�b�A�Х��g�J�ǥ͸�ơI");
        return;
    }

    // ��J�Ǹ�
    printf("�п�J�n�d�ߪ��Ǹ�: ");
    scanf_s("%u", &inputID);

    // �p�G�Ǹ��� 0�A�h���ܸ�Ƥ��s�b
    if (inputID == 0) {
        printf("�ӵ���Ƥ��s�b�C\n");
    }
    else {
        // Ū���ɮפ�����ƨä��Ǹ�
        while (1) {
            struct studentData student = { 0, "", "", 0, 0, 0.0 };

            // Ū���@�����
            int result = fread(&student, sizeof(struct studentData), 1, cfPtr);

            // �p�GŪ�����\�B�Ǹ��ǰt�A��ܸ��
            if (result == 1 && student.ID != 0) {
                if (student.ID == inputID) {
                    printf("\n%-6s%-16s%-11s%-10s%-10s%-10s\n",
                        "ID", "Last Name", "First Name", "Math", "Comput", "Average");
                    printf("%-6d%-16s%-11s%-10d%-10d%-10.2f\n",
                        student.ID, student.lastName, student.firstName,
                        student.math, student.comput, student.avg);
                    found = 1;
                    break; // ����ƫᰱ��j�M
                }
            }
            else if (result != 1) {
                break; // �p�G�S����h��ơA���X�j��
            }
        }

        // �p�G�S�����ӾǸ�����ơA��ܴ��ܰT��
        if (!found) {
            printf("�ӵ���Ƥ��s�b�C\n");
        }
    }

    fclose(cfPtr); // �����ɮ�
}

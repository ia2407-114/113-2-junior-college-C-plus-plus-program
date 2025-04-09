/*�D��2.  �ھھǸ� ID�A�z�L��L�N��Ƽg�J�ɮפ�*/

#include <stdio.h>

// �w�q�ǥ͵��c��
typedef struct student {
    int ID;           // �ǥ;Ǹ�
    char name[20];    // �ǥͩm�W�A�̦h 20 �Ӧr��
    int math;         // �ƾǦ��Z
    int comput;       // �p������Z
    float AVG;        // �ǥͪ��������Z
} stu;

int main() {
    stu s;  // �Ыؤ@�Ӿǥ͵��c���ܼ� s�O�@�Ӿǥ�
    FILE* fp;

    // �}���ɮץH�g�J�Ҧ�
    fp = fopen("student_data.txt", "a"); // "a" �H���[�Ҧ��}���ɮ� ���|�Q�л\

    if (fp == NULL) {
        // �Y�ɮ׵L�k�}�ҡA��ܿ��~�õ����{��
        printf("�L�k�}���ɮ�\n");
        return 1;
    }

    // ��J�ǥ͸��
    printf("�п�J�ǥ;Ǹ�: ");
    scanf_s("%d", &s.ID);

    printf("�п�J�ǥͩm�W: ");
    scanf_s("%s", s.name);

    printf("�п�J�ƾǦ��Z: ");
    scanf_s("%d", &s.math);

    printf("�п�J�p������Z: ");
    scanf_s("%d", &s.comput);

    // �p��ǥͥ������Z
    s.AVG = (s.math + s.comput) / 2.0;

    // ��ܾǥ͸��
    printf("\n�ǥ͸��:\n");
    printf("�Ǹ�: %d\n", s.ID);
    printf("�m�W: %s\n", s.name);
    printf("�ƾǦ��Z: %d\n", s.math);
    printf("�p������Z: %d\n", s.comput);
    printf("�������Z: %.2f\n", s.AVG);

    // �N��Ƽg�J�ɮ�
    fprintf(fp, "�Ǹ�: %d, �m�W: %s, �ƾǦ��Z: %d, �p������Z: %d, �������Z: %.2f\n",
        s.ID, s.name, s.math, s.comput, s.AVG);

    // �����ɮ�
    fclose(fp);

    return 0;
}

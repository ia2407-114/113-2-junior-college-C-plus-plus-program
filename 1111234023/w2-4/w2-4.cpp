#include <stdio.h>
void main()
{
    FILE* fp;  /* �ŧi�ܼ� */
    char fname[20] = "student3.txt";
    int id, math, comput;
    char name[20] = "";
    double avg;
    if (fopen_s(&fp, fname, "w") != 0) { //fopen_s���\�إߨåB�}�Ҧ^�ǭȬ�0
        puts("File could not be opened");
    }
    else {
        printf("�п�Jid, name, math, comput:");
        scanf_s("%d%8s%8d%8d", &id, name, 19, &math, &comput);
        avg = (float)(math + comput) / 2;

        printf("�}�l�g�J�ɮ�%s..\n", fname);
        fprintf(fp, "%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");

        fprintf(fp, "%d%8s%8d%8d  %fl", id, name, math, comput, avg);
        printf("�g�J�ɮ׵���!\n");
    }
    /* �榡�ƿ�X�ɮפ��e */
    fclose(fp); /* �����ɮ� */
    if (fopen_s(&fp, fname, "r") != 0) { //fopen_s���\�إߨåB�}�Ҧ^�ǭȬ�0
        puts("File could not be opened");
    }
    else {
        if (fp != NULL)
        {
            printf("�ɮפ��e: \n");
            printf("%s%8s%8s%8s%8s\n", "ID", "Name", "math", "comput", "average");
            printf("%d%8s%8d%8d  %lf\n", id, name, math, comput, avg);
            fclose(fp);
        }
        else {
            printf("���~: �ɮ׶}�ҿ��~..\n");
        }
    }
}
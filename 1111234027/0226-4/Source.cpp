#include <stdio.h>

int main()
{
    FILE fp; / �ŧi�ܼ�* /
    char fname[20] = "phones.txt";
    char str0[50] = "iPhone 11";
    char str1[50] = "iPhone 12";
    char str2[50] = "iPhone X";
    fp = fopen(fname, "w");   /* �}�Ҽg�J�ɮ� */
    printf("�}�l�g�J�ɮ�%s..\n", fname);
    /* �榡�ƿ�X�ɮפ��e */
    fprintf(fp, "%d=> %s\n", 1, str0);
    fprintf(fp, "%d=> %s\n", 2, str1);
    fprintf(fp, "%d=> %s\n", 3, str2);
    printf("�g�J�ɮ׵���!\n");
    fclose(fp); /* �����ɮ� */
    fp = fopen(fname, "r");   /* �}��Ū���ɮ� */
    if (fp != NULL)         /* Ū���ɮ� */
    {
        printf("�ɮפ��e: \n");
        while (fscanf(fp, "%s", str0) != EOF)
        {
            printf("%s\n", str0);
        }
        fclose(fp); /* �����ɮ� */
    }
    else
        printf("���~: �ɮ׶}�ҿ��~..\n");

    return 0;
}
#include <stdio.h>

int main()
{
    FILE* fp;  /* �ŧi�ܼ� */
    char student[20] = "student.txt";
    char stu0[50] = "hahaha";
    char stu1[50] = "80";
    fopen_s(&fp, student, "w") != 0;
    printf("�}�l�g�J�ɮ� %s...\n", student);

    fprintf(fp, "%d => %s\n", 1, stu0);
    fprintf(fp, "%d => %s\n", 2, stu1);
    printf("�g�J�ɮ׵���!\n");
    fclose(fp); 

    fopen_s(&fp, student, "w") != 0;
    printf("�ɮפ��e: \n");
    while (fgets(stu0, sizeof(stu0), fp) != NULL) {
        printf("%s", stu0);
    }
    fclose(fp); 
    return 0;
}

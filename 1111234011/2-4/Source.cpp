#include<stdio.h>

typedef struct student
{
	int id;
	char name[20];
	int math;
	int computer;
	float avg;
}stu;

int main()
{
	stu my = { 0,"",0,0,0.0 };
	int target = 0;
	//open file
	FILE* fp;
	if (fopen_s(&fp, "score.dat", "wb+") != 0)
	{
		puts("...could not open...");
		return 1;
	}

	//input student data ,input "0" to end put
	printf("\ninput id: ");
	scanf_s("%d", &my.id);
	while (my.id > 0)
	{
		printf("\ninput name math computer \n");
		scanf_s("%s%d%d", my.name, 19, &my.math, &my.computer);
		my.avg = (float)(my.math + my.computer) / 2;
		fseek(fp, (my.id - 1) * (sizeof(stu)), SEEK_SET);
		fwrite(&my, sizeof(stu), 1, fp);
		printf("\ninput id: ");
		scanf_s("%d", &my.id);
	}
	//output all students data
	rewind(fp);
	stu read = { 0,"",0,0,0.0 };
	while (fread(&read, sizeof(stu), 1, fp) == 1)
	{
		printf("\n%10d%10s%10d%10d%30f\n", read.id, read.name, read.math, read.computer, read.avg);
	}
	// input a student id that want to search for 
	rewind(fp);
	while (target <= 0)
	{
		printf("\n\ninput id that want to search for:  ");
		scanf_s("%d", &target);

	}
	fseek(fp, (target - 1) * (sizeof(stu)), SEEK_SET);
	if (fread(&read, sizeof(stu), 1, fp) == 1)
	{
		printf("\n%10d%10s%10d%10d%30f\n", read.id, read.name, read.math, read.computer, read.avg);
	}
	else
		puts("could not found..");
	fclose(fp);
	return 0;
}
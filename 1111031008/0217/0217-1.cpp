#include <stdio.h>

typedef struct clientData 
{
	int accountNum;
	char lastName[15];
	char firstName[10];
	double balance;
} client;

typedef struct student 
{
	int ID;
	char name[20];
	int math, comput;
	float AVG;
} stu;

void main(void)
{   FILE* cfPtr;
	if (fopen_s(&cfPtr, "account.Num", "wb") != 0) 
	{ 
		puts("File could not be opened");
	}
	else 
	{
		stu blankStu = { 0, "",0,0,0.0 };
		int i;
		for (i = 1; i <= 100; i++) 
		{
			fwrite(&blankStu, sizeof(client), 1, cfPtr);
	    }

		fclose(cfPtr);
	}
}
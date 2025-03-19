#include <stdio.h>
#include <stdlib.h>

// self-referential structure                       
struct stuNode {
	unsigned int ID; // �Ǹ�
	char Name[15]; // �ǥͩm�W    
	int math, computer; // �ƾǡB�q�����Z   
	double average; // �������Z  
	stuNode* nextPtr; // pointer to next node
};

struct stuNode* stuf = NULL; // synonym for struct listNode

stuNode* createnode(void);
void insert(stuNode** sPtr, stuNode* stu_data);
char deleteX(stuNode** sPtr, int ID);
int isEmpty(stuNode* sPtr);
void printList(stuNode* currentPtr);
void instructions(void);

int main(void)
{
	instructions();
	int choice;
	scanf_s("%d", &choice);

	while (choice != 3)
	{

		switch (choice)
		{
		case 1:
		{
			stuNode* tmp = createnode();
			while (tmp != NULL) {
				insert(&stuf, tmp);
				tmp = createnode();
			}
		}
		break;
		case 2:
			printf("Enter ID to be deleted: ");
			int deletedID;
			scanf_s("%d", &deletedID);
			deleteX(&stuf, deletedID);
			printf("ID %d deleted.\n", deletedID);
			break;
		}
		printList(stuf);

		printf("\n\n");

		instructions();
		scanf_s("%d", &choice);



	}
	printf("End of run.\n");
}

void instructions(void)
{
	printf("�п�J�Ʀr:\n"
		"   1 �s�W�ǥ͸��\n"
		"   2 �R���ǥ͸��\n"
		"   3 ����\n");
}

stuNode* createnode(void)
{
	stuNode* newPtr = (stuNode*)malloc(sizeof(stuNode));
	if (newPtr != NULL) {
		printf("%s", "Enter account number"
			" (1 to 100, 0 to end input): \n");
		scanf_s("%d", &newPtr->ID);

		if (newPtr->ID == 0) {
			free(newPtr);
			return NULL;
		}
		else
		{
			newPtr->nextPtr = NULL;
			// user enters last name, first name and balance
			printf("%s", "Enter Name, Math, Computer : \n");

			// set record lastName, firstName and balance value
			scanf_s("%14s%9d%9d", newPtr->Name, 14,
				&newPtr->math, &newPtr->computer);
			newPtr->average = (newPtr->math + newPtr->computer) / 2;
			return newPtr;
		}

	}
	return NULL;
}

void insert(stuNode** sPtr, stuNode* stu_data)
{
	if (stu_data != NULL) {
		stuNode* previousPtr = NULL;
		stuNode* currentPtr = *sPtr;

		// ��촡�J��m
		while (currentPtr != NULL) {
			previousPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}

		// ���J�s�`�I
		if (previousPtr == NULL) {
			*sPtr = stu_data;
		}
		else {
			previousPtr->nextPtr = stu_data;

		}
	}
	else {
		printf("�L�k���J�A�O���餣���C\n");
	}
}

char deleteX(stuNode** arg_stuf, int ID)
{
	stuNode* previousPtr = NULL;
	stuNode* currentPtr = *arg_stuf;

	if (ID == currentPtr->ID) {
		stuNode* tempPtr = *arg_stuf;
		*arg_stuf = currentPtr->nextPtr;
		free(tempPtr);
		return 1;
	}
	else
	{
		while (currentPtr != NULL) {
			if (currentPtr->ID == ID) {
				stuNode* tempPtr = currentPtr;
				currentPtr = currentPtr->nextPtr;
				previousPtr->nextPtr = currentPtr;
				free(tempPtr);
				return 1;
			}
			previousPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}
	}
	return '\0';
}

void printList(stuNode* arg_stuf)
{
	stuNode* currentPtr = arg_stuf;

	// ��촡�J��m
	while (currentPtr != NULL) {
		printf("%s%10d%10d%10d%10.2f\n", currentPtr->Name, currentPtr->ID, currentPtr->math, currentPtr->computer, currentPtr->average);
		currentPtr = currentPtr->nextPtr;
	}
}
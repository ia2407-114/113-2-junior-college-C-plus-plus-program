#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct clientData {
    unsigned int id; // �Ǹ�
    char name[15]; // �ǥͩm�W    
    int math, comput; // �ƾǡB�q�����Z   
    double avg; // �������Z
    clientData* nextPtr;
} clientData;
typedef clientData* clientDataPtr;


// prototypes
void insert(clientDataPtr* sPtr, unsigned int id, char name[15], int math, int comput, double avg);
char delete_node(clientDataPtr* sPtr, unsigned int id);
int isEmpty(clientDataPtr sPtr);
void printList(clientDataPtr currentPtr);
void instructions(void);

int main(void)
{
    clientDataPtr startPtr = NULL; // initially there are no nodes
    unsigned int id; // �Ǹ�
    char name[15]; // �ǥͩm�W    
    int math, comput; // �ƾǡB�q�����Z   
    double avg; // �������Z

    instructions(); // display the menu
    printf("\n%s", "�̷ӻ�����J�Ʀr���O:");
    unsigned int choice; // user's choice
    scanf_s("%u", &choice);

    // loop while user does not choose 3
    while (choice != 3) {

        switch (choice) {
        case 1:
            printf("%s", "�п�Jid, name, math, comput:\n");
            scanf_s("\n%d%s%d%d", &id, name, 14, &math, &comput);
            avg = ((double)(math)+(double)(comput)) / 2;
            insert(&startPtr, id, name, math, comput, avg); // insert item in list
            printList(startPtr);
            break;
        case 2:

            if (!isEmpty(startPtr)) {
                printf("%s", "�п�J�n�R����ƪ�ID:");
                scanf_s("\n%d", &id);


                if (delete_node(&startPtr, id)) {
                    printf("ID:%d �w�g�Q�R��!\n", id);
                    printList(startPtr);
                }
                else {
                    printf("ID:%d �d�ߤ���!\n\n", id);
                }
            }
            else {
                puts("�}�C�O�Ū�\n");
            }

            break;
        default:
            puts("�L�Ī��ﶵ\n");
            instructions();
            break;
        } // end switch

        printf("\n%s", "�п�J�̷ӻ�����J�Ʀr���O:");
        scanf_s("%u", &choice);
    }

    puts("����");
}

// display program instructions to user
void instructions(void)
{
    puts("�п�J�Ʀr:\n"
        "   1 �s�W�ǥ͸��\n"
        "   2 �R���ǥ͸��\n"
        "   3 ����");
}

// insert a new value into the list in sorted order
void insert(clientDataPtr* sPtr, unsigned int id, char name[15], int math, int comput, double avg)
{
    clientDataPtr newPtr = (clientDataPtr)malloc(sizeof(clientData)); // create node

    if (newPtr != NULL) { // is space available
        newPtr->id = id; // place value in node
        strcpy_s(newPtr->name, name);
        newPtr->math = math;
        newPtr->comput = comput;
        newPtr->avg = avg;
        newPtr->nextPtr = NULL; // node does not link to another node

        clientDataPtr previousPtr = NULL;
        clientDataPtr currentPtr = *sPtr;

        // loop to find the correct location in the list       
        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr; // walk to ...               
            currentPtr = currentPtr->nextPtr; // ... next node 
        }

        // insert new node at beginning of list
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { // insert new node between previousPtr and currentPtr
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("%d�w�g�Q�إߤF\n", id);
    }
}

// delete a list element
char delete_node(clientDataPtr* sPtr, unsigned int id)
{
    // delete first node if a match is found
    if (id == (*sPtr)->id) {
        clientDataPtr tempPtr = *sPtr; // hold onto node being removed
        *sPtr = (*sPtr)->nextPtr; // de-thread the node
        free(tempPtr); // free the de-threaded node
        return id;
    }
    else {
        clientDataPtr previousPtr = *sPtr;
        clientDataPtr currentPtr = (*sPtr)->nextPtr;

        // loop to find the correct location in the list
        while (currentPtr != NULL && currentPtr->id != id) {
            previousPtr = currentPtr; // walk to ...  
            currentPtr = currentPtr->nextPtr; // ... next node  
        }

        // delete node at currentPtr
        if (currentPtr != NULL) {
            clientDataPtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return id;
        }
    }

    return '\0';
}

// return 1 if the list is empty, 0 otherwise
int isEmpty(clientDataPtr sPtr)
{
    return sPtr == NULL;
}

// print the list
void printList(clientDataPtr currentPtr)
{
    // if list is empty
    if (isEmpty(currentPtr)) {
        puts("�o���쵲�}�C�O�Ū�\n");
    }
    else {
        puts("�}�C�p�U:");
        printf("%s%8s%8s%8s%8s\n", "ID", "name", "math", "comput", "avg");

        // while not the end of the list
        while (currentPtr != NULL) {
            printf("%d%8s%8d%8d   %lf\n", currentPtr->id, currentPtr->name, currentPtr->math, currentPtr->comput, currentPtr->avg);
            currentPtr = currentPtr->nextPtr;
        }
    }
}
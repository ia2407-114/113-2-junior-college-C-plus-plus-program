#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student {
    int id;
    char name[50]; 
    float grade;
    struct student* nextPtr; 
};

typedef struct student Student;
typedef Student* StudentPtr;

void insert(StudentPtr* sPtr, int id, const char* name, float grade);
int deleteById(StudentPtr* sPtr, int id);
void printList(StudentPtr currentPtr);
int isEmpty(StudentPtr sPtr);
void instructions(void);

int main(void) {
    StudentPtr startPtr = NULL; 
    int id; 
    char name[50]; 
    float grade; 

    instructions(); 
    printf("%s", "? ");
    unsigned int choice; 
    scanf("%u", &choice);

   
    while (choice != 3) {
        switch (choice) {
            case 1:
               
                for (int i = 0; i < 4; i++) {
                    printf("Enter student %d's ID: ", i + 1);
                    scanf("%d", &id);
                    printf("Enter student %d's name: ", i + 1);
                    scanf("%s", name);
                    printf("Enter student %d's grade: ", i + 1);
                    scanf("%f", &grade);

                    insert(&startPtr, id, name, grade); 
                }
                printList(startPtr); 
                break;
            case 2:
                if (!isEmpty(startPtr)) {
                    printf("Enter student ID to be deleted: ");
                    scanf("%d", &id);

                   
                    if (deleteById(&startPtr, id)) {
                        printf("Student with ID %d deleted.\n", id);
                    } else {
                        printf("Student with ID %d not found.\n", id);
                    }

                    printList(startPtr); 
                } else {
                    puts("List is empty.\n");
                }
                break;
            default:
                puts("Invalid choice.\n");
                instructions();
                break;
        }

        printf("? ");
        scanf("%u", &choice);
    }

    puts("End of run.");
}

void instructions(void)
{ 
   puts("Enter your choice:\n"
      "   1 to insert students into the list.\n"
      "   2 to delete a student by ID.\n"
      "   3 to end.");
}

void insert(StudentPtr *sPtr, int id, const char* name, float grade)
{ 
  StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));

   if (newPtr != NULL) {
      newPtr->id = id; 
      strcpy(newPtr->name, name); 
      newPtr->grade = grade; 
      newPtr->nextPtr = NULL; 

      StudentPtr previousPtr = NULL;
      StudentPtr currentPtr = *sPtr;

      while (currentPtr != NULL && id > currentPtr->id) {
         previousPtr = currentPtr;
         currentPtr = currentPtr->nextPtr; 
      }                                          

      if (previousPtr == NULL) { 
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } 
      else { 
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } 
   } 
   else {
      printf("Student not inserted. No memory available.\n");
   } 
}

int deleteById(StudentPtr* sPtr, int id)
{ 
    if (*sPtr == NULL) {
        return 0; 
    }

   
    if (id == (*sPtr)->id) { 
        StudentPtr tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr; 
        free(tempPtr); 
        return 1; 
    } 
    else { 
        StudentPtr previousPtr = *sPtr;
        StudentPtr currentPtr = (*sPtr)->nextPtr;

        while (currentPtr != NULL && currentPtr->id != id) { 
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        } 

 
        if (currentPtr != NULL) { 
            StudentPtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr); 
            return 1; 
        } 
    }

    return 0; 
}


int isEmpty(StudentPtr sPtr)
{ 
   return sPtr == NULL;
} 

void printList(StudentPtr currentPtr)
{ 
   if (isEmpty(currentPtr)) {
      puts("List is empty.\n");
   } 
   else { 
      puts("The list of students:");

      while (currentPtr != NULL) { 
         printf("ID: %d, Name: %s, Grade: %.2f --> ", currentPtr->id, currentPtr->name, currentPtr->grade);
         currentPtr = currentPtr->nextPtr;   
      } 

      puts("NULL\n");
   } 
}


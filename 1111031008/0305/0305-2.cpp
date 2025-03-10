#include <stdio.h>
#include <stdlib.h>

// self-referential structure
struct listNode {
    char data; // each listNode contains a character
    struct listNode* nextPtr; // pointer to next node
};

typedef struct listNode ListNode;
typedef ListNode* ListNodePtr;

// prototypes
void insert(ListNodePtr* sPtr, char value);
char delete_n(ListNodePtr* sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void) {
    ListNodePtr startPtr = NULL; // initially there are no nodes
    char item; // char entered by user

    instructions(); // display the menu
    printf("%s","? ");
    unsigned int choice; // user's choice
    scanf("%u", &choice);

    // loop while user does not choose 3
    while (choice != 3) {
        switch (choice) {
            case 1:
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item);
            insert(&startPtr, item); // insert item in list
            printList(startPtr);
            break;
            case 2: // delete an element
            // if list is not empty
            if (!isEmpty(startPtr)) { 
               printf("%s", "Enter character to be deleted: ");
               scanf("\n%c", &item);

               // if character is found, remove it
               if (delete_n(&startPtr, item)) { // remove item
                  printf("%c deleted.\n", item);
                  printList(startPtr);
               } 
               else {
                  printf("%c not found.\n\n", item);
               } 
            } 
            else {
               puts("List is empty.\n");
            }
            break;
        default:
            puts("Invalid choice.\n");
            instructions();
            break;
        } // end switch

        printf("? ");
        scanf("%u", &choice);
    }

    puts("End of run.");
}

// display program instructions to user
void instructions(void)
{ 
   puts("Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.");
}

// insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr, char value)
{ 
  ListNodePtr newPtr = (ListNodePtr)malloc(sizeof(ListNode));

   if (newPtr != NULL) { // is space available
      newPtr->data = value; // place value in node
      newPtr->nextPtr = NULL; // node does not link to another node

      ListNodePtr previousPtr = NULL;
      ListNodePtr currentPtr = *sPtr;

      // loop to find the correct location in the list       
      while (currentPtr != NULL && value > currentPtr->data) {
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
      printf("%c not inserted. No memory available.\n", value);
   } 
}
// delete a list element
char delete_n(ListNodePtr* sPtr, char value) {
    if (*sPtr == NULL) { // 檢查是否為空
        return '\0';
    }

    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = *sPtr;

    while (currentPtr != NULL && currentPtr->data != value) {
        previousPtr = currentPtr;
        currentPtr = currentPtr->nextPtr;
    }

    if (currentPtr != NULL) { // 找到要刪除的節點
        if (previousPtr == NULL) { // 刪除第一個節點
            *sPtr = currentPtr->nextPtr;
        }
        else {
            previousPtr->nextPtr = currentPtr->nextPtr;
        }
        free(currentPtr);
        return value;
    }

    return '\0'; // 沒找到
}

// return 1 if the list is empty, 0 otherwise
int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;
}

// print the list
void printList(ListNodePtr currentPtr) {
    if (isEmpty(currentPtr)) {
        puts("List is empty.\n");
    }
    else {
        puts("The list is:");
        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}


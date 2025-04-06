/*�D��1. �N�ǥ͵��c��J�d�ҵ{���X�����N��������c�A�[�W�ۧڰѦҫ��СA�z�L��L��J4���ǥ͸�ơA�ھھǸ� ID���J�쵲��C���A�̫�N�쵲��C�����e�L�X�C
�D��2. �ӤW�D�A�z�L��L��J1���ǥ�ID�A�ھھǸ� ID�R���쵲��C���������`�I�A�̫�N�쵲��C�����e�L�X�C*/
#include <stdio.h>
#include <stdlib.h>

// �w�q�ǥ͸`�I���c
struct stuNode {
    int ID;                 // �Ǹ�
    char Name[15];          // �ǥͩm�W
    int math, computer;     // �ƾǡB�q�����Z
    double average;         // �������Z
    struct stuNode* next;   // ���V�U�@�Ӹ`�I������
};

struct stuNode* head = NULL; // ���V�쵲��C�}�Y������

// ���ϥΪ̿�J�ǥͪ��m�W�B�ƾǦ��Z�B�q�����Z�A�p�⥭�����Z�A�ê�l���쵲��C�`�I
struct stuNode* createNode() {
    struct stuNode* newNode = (struct stuNode*)malloc(sizeof(struct stuNode));
    if (!newNode) return NULL;

    printf("Enter ID (0 to stop): ");
    scanf_s("%d", &newNode->ID);
    if (newNode->ID == 0) { // �Y��J 0�A�h�פ��J
        free(newNode);
        return NULL;
    }
    printf("Enter Name, Math, Computer: ");
    scanf_s("%s %d %d", newNode->Name, &newNode->math, &newNode->computer);
    newNode->average = (newNode->math + newNode->computer) / 2.0;
    newNode->next = NULL;
    return newNode;
}

// �N�s�ǥ͸`�I (newNode) ���Ǹ� (ID) �j�p���Ǵ��J�쵲��C�C
void insert(struct stuNode* newNode) {
    if (!newNode) return;
    if (!head || newNode->ID < head->ID) { // ���J���쵲��C�}�Y
        newNode->next = head;
        head = newNode;
        return;
    }
    struct stuNode* cur = head;
    while (cur->next && cur->next->ID < newNode->ID) // ��촡�J��m
        cur = cur->next;
    newNode->next = cur->next;
    cur->next = newNode;
}

// �R�����w ID ���`�I
void deleteNode(int ID) {
    if (!head) return;
    struct stuNode* cur = head, * prev = NULL;
    if (head->ID == ID) { // �Y�R�����O�Ĥ@�Ӹ`�I
        head = head->next;
        free(cur);
        return;
    }
    while (cur && cur->ID != ID) { // �j�M�ؼ� ID
        prev = cur;
        cur = cur->next;
    }
    if (cur) { // ���`�I��R��
        prev->next = cur->next;
        free(cur);
    }
}

// �C�L�쵲��C���e
void printList() {
    struct stuNode* cur = head;
    if (!cur) {
        printf("List is empty.\n");
        return;
    }
    printf("ID   Name      Math Computer Average\n");
    while (cur) {
        printf("%d  %-10s %d   %d   %.2f\n", cur->ID, cur->Name, cur->math, cur->computer, cur->average);
        cur = cur->next;
    }
}

int main() {
    int choice, ID;
    while (1) {
        printf("1. Add Student\n2. Delete Student\n3. Exit\nChoice: ");
        scanf_s("%d", &choice);
        if (choice == 3) break; // ��� 3 �h�����{��
        if (choice == 1) {
            for (int i = 0; i < 4; i++) // �s���J 4 ���ǥ͸��
                insert(createNode());
        }
        else if (choice == 2) {
            printf("Enter ID to delete: ");
            scanf_s("%d", &ID);
            deleteNode(ID);
        }
        printList(); // ����쵲��C���e
    }
    return 0;
}


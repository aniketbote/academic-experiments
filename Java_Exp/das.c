#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct hash *hashTable = NULL;
int eleCount = 0;

struct node {
    int libcard, roll_no;
    char name[100];
    struct node *next;
};

struct hash {
    struct node *head;
    int count;
};

struct node * createNode(int libcard, char *name, int roll_no) {
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->libcard = libcard;
    newnode->roll_no = roll_no;
    strcpy(newnode->name, name);
    newnode->next = NULL;
    return newnode;
}

void insertToHash(int libcard, char *name, int roll_no) {
    int hashIndex = libcard % eleCount;
    struct node *newnode = createNode(libcard, name, roll_no);

    if (!hashTable[hashIndex].head) {
        hashTable[hashIndex].head = newnode;
        hashTable[hashIndex].count = 1;
        return;
    }

    newnode->next = (hashTable[hashIndex].head);

    hashTable[hashIndex].head = newnode;
    hashTable[hashIndex].count++;
    return;
}

void deleteFromHash(int libcard) {

    int hashIndex = libcard % eleCount, flag = 0;
    struct node *temp, *myNode;

    myNode = hashTable[hashIndex].head;
    if (!myNode) {
        printf("Given data is not present in hash Table!!\n");
        return;
    }
    temp = myNode;
    while (myNode != NULL) {

        if (myNode->libcard == libcard) {
            flag = 1;
            if (myNode == hashTable[hashIndex].head)
                hashTable[hashIndex].head = myNode->next;
            else
                temp->next = myNode->next;

            hashTable[hashIndex].count--;
            free(myNode);
            break;
        }
        temp = myNode;
        myNode = myNode->next;
    }
    if (flag)
        printf("Data deleted successfully from Hash Table\n");
    else
        printf("Given data is not present in hash Table!!!!\n");
    return;
}

void searchInHash(int libcard) {
    int hashIndex = libcard, flag = 0;
    struct node *myNode;
    myNode = hashTable[hashIndex].head;
    if (!myNode) {
        printf("Search element unavailable in hash table\n");
        return;
    }
    while (myNode != NULL) {
        if (myNode->libcard == libcard) {
            printf("Library card no  : %d\n", myNode->libcard);
            printf("Name     : %s\n", myNode->name);
            printf("Roll no      : %d\n", myNode->roll_no);
            flag = 1;
            break;
        }
        myNode = myNode->next;
    }
    if (!flag)
        printf("Search element unavailable in hash table\n");
    return;
}

void display() {
    struct node *myNode;
    int i;
    for (i = 0; i < eleCount; i++) {
        if (hashTable[i].count == 0)
            continue;
        myNode = hashTable[i].head;
        if (!myNode)
            continue;
        printf("\nData at index %d in Hash Table:\n", i);
        printf("Library card    Name        Roll no   \n");
        printf("---------------------------------------------\n");
        while (myNode != NULL) {
            printf("%-12d", myNode->libcard);
            printf("%-15s", myNode->name);
            printf("%d\n", myNode->roll_no);
            myNode = myNode->next;
        }
    }
    return;
}

int main() {
    int n, ch, libcard, roll_no;
    char name[100];
    FILE fptr;
    fptr=fopen("StudentDatabase.docx","w");
    if (fptr==NULL)
    {
        printf("File does not exists \n");
        return;
    }
    else
    {
    printf("Enter the number of elements:");
    scanf("%d", &n);
    hashTable = (struct hash *) calloc(n, sizeof(struct hash));
        insertToHash(libcard, name, roll_no);
    }

    eleCount = n;
    /* create hash table with "n" no of buckets */

    while (1) {
        printf("\n1. Deletion\n");
        printf("3. Searching\t4. Display\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the library card no to perform deletion:");
            scanf("%d", &libcard);
            /* delete node with "libcard" from hash table */
            deleteFromHash(libcard);
            break;

        case 3:
            printf("Enter the library card no to search:");
            scanf("%d", &libcard);
            searchInHash(libcard);
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("U have entered wrong option!!\n");
            break;
        }
    }
    return 0;
}

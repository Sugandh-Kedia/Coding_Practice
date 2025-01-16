#include <stdio.h> 
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
};
struct node *head = NULL; 
// Function to create a new node
struct node* createNode(int data) { 
 struct node* newNode = (struct node*)malloc(sizeof(struct node)); 
 newNode->data = data;
 newNode->next = NULL;
 return newNode;
}
// Function to insert a node at the beginning of the list 
void insertNode(int data) {
 struct node *newNode = createNode(data); 
    if(head == NULL) {
        head = newNode; 
    
    } 
    else {
        newNode->next = head; 
        head = newNode;
    } 
 printf("Inserted\n");
}
// Function to delete a node from the list 
void deleteNode(int data) {
 struct node *temp = head, *prev = NULL;
    while(temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) { 
        printf("Element not found\n");
        return;
    }
    if(prev == NULL) { 
        head = head->next;
    }
    else {
        prev->next = temp->next;
    }
    printf("Deleted\n"); 
    free(temp);
}
// Function to display the List 
void displayList(){ 
    struct node *temp = head; 
    printf("Linked List: "); 
    while(temp != NULL) { 
        printf("%d ", temp->data); 
        temp = temp->next;
    }
    printf("\n");
}
// Function to search for an element in the list 
void search(int data) {
 struct node *temp = head;
 int pos = 0; 
    while(temp != NULL) { 
        pos++;
        if(temp->data == data) {
            printf("Element index: %d\n", pos);
            return;
        }
        temp = temp->next;
    } 
 printf("Element not found\n");
}

int main() {
    int choice, data;
    printf("\nLinked List and Operations in C\n"); 
    printf("1. Insert\n"); 
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Search\n"); 
    printf("5. Exit\n");
    while(1) { 
        printf("Enter choice: ");
        scanf("%d", &choice); 
        switch(choice) {
        case 1:
            printf("Enter data: "); 
            scanf("%d", &data); 
            insertNode(data);
        break;
        case 2:
            printf("Enter data: "); 
            scanf("%d", &data);
            deleteNode(data);
        break;
        case 3:
            displayList();
        break;
        case 4:
            printf("Enter data: "); 
            scanf("%d", &data);
            search(data);
        break;
        case 5:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    } 
}

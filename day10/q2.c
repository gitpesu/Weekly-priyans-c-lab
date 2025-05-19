#include <stdio.h>
#include <stdlib.h>

// Node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the front
void insertFront(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to display the linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete the first node
void deleteFront(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, cannot delete\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Function to free the entire linked list
void freeList(struct Node** head) {
    struct Node* temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL;
    int n, data;
    
    // Prompt for number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    
    // Insert nodes at the front
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertFront(&head, data);
    }
    
    // Display the list
    display(head);
    
    // Delete the first node
    printf("Deleting the first node...\n");
    deleteFront(&head);
    
    // Display the list again
    display(head);
    
    // Free the list
    freeList(&head);
    printf("Linked list memory freed.\n");
    
    return 0;
}
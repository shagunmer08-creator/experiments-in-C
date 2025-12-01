#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to display the list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head, *second, *third, *newNode, *temp;
    int value, position, i;

    // Creating a simple linked list: 10 -> 20 -> 30
    head = createNode(10);
    second = createNode(20);
    third = createNode(30);

    head->next = second;
    second->next = third;

    printf("Original Linked List:\n");
    display(head);

    // Taking user input for insertion
    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert (after which node): ");
    scanf("%d", &position);

    newNode = createNode(value);
    temp = head;

    // Move to the node after which we want to insert
    for (i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("\nUpdated Linked List:\n");
        display(head);
    }

    return 0;
}]

]]]
]

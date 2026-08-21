#include <stdio.h>
#include <stdlib.h>

// Self-referential structure for a linked list node
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Fuction prototypes
Node *create_node(int value);
void insert_at_end(Node **head, int value);
void print_list(const Node *head);
void free_list(Node **head);


int main(void){
    Node *head = NULL; // start with an empty list
    
    printf("=== Singly linked list implementation ===\n\n");

    // Inserting nodes into the linked list
    insert_at_end(&head, 10);
    insert_at_end(&head, 20);
    insert_at_end(&head, 30);
    insert_at_end(&head, 40);

    // Print node data and memory chain addresses
    print_list(head);

    // Deallocate all nodes on the heap
    free_list(&head);

    return EXIT_SUCCESS;
}

// Helper function to allocate a new node on the heap
Node *create_node(int value) {
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        fprintf(stderr, "Error: Heap memory allocation failed for new node.\n");
        return NULL;
    }
    new_node->data = value;
    new_node->next = NULL;  // Initailize next pointer to NULL
    return new_node;
}

// Append a new node to the end of the list
void insert_at_end(Node **head, int value) {
    if (head == NULL) return;

    Node *new_node = create_node(value);
    if (new_node == NULL) return;

    // If list is empty, new node becomes the head
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    // Traverse to the last node
    Node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Link the last node to the new node
    current->next = new_node;
}

// Traverses and displays all elements in the list
void print_list(const Node *head) {
    const Node *current = head;
    printf("List elements: ");

    while (current != NULL) {
        printf("[%d | next -> %p]", current->data, (void *)current->next);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    printf(" -> NULL\n\n");
}

// Free all dynamically allocated  nodes sequentially
void free_list(Node **head) {
    if (head == NULL || *head == NULL) return;

    Node *current = *head;
    Node *next_node = NULL;

    while (current != NULL) {
        next_node = current->next;  // Save pointer to next node before freeing
        free(current);
        current = next_node;
    }

    *head = NULL;   // Clear head pointer after cleanup
    printf("Successfully freed all heap memomery for the linked list.\n");
}

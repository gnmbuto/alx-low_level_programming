#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int data;
    struct listint_s *next;
} listint_t;

int delete_nodeint_at_index(listint_t **head, unsigned int index) {
    if (head == NULL || *head == NULL) {
        return -1;  // List is empty or invalid input
    }

    if (index == 0) {
        listint_t *temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;  // Successfully deleted the node at index 0
    }

    listint_t *current = *head;
    listint_t *previous = NULL;

    // Traverse to the node at the specified index
    for (unsigned int i = 0; current != NULL && i < index; i++) {
        previous = current;
        current = current->next;
    }

    // If index is out of bounds
    if (current == NULL) {
        return -1;  // Index is greater than the length of the list
    }

    // Adjust pointers to remove the node at the specified index
    previous->next = current->next;
    free(current);

    return 1;  // Successfully deleted the node at the specified index
}

int main() {
    listint_t *head = NULL;

    // Populate the linked list with some values (for example)
    for (int i = 0; i < 5; i++) {
        listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
        new_node->data = i * 10;
        new_node->next = head;
        head = new_node;
    }

    // Print the original linked list
    printf("Original list: ");
    listint_t *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Delete node at index 2 (for example)
    int result = delete_nodeint_at_index(&head, 2);
    if (result == 1) {
        printf("Node at index 2 deleted.\n");

        // Print the modified linked list
        printf("Modified list: ");
        current = head;
        while (current != NULL) {
            printf("%d -> ", current->data);
            current = current->next;
        }
        printf("NULL\n");
    } else {
        printf("Failed to delete node at index 2.\n");
    }

    return 0;
}

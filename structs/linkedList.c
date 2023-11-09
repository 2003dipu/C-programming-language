#include <stdio.h>
#include <stdlib.h> // Add this header for malloc

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Create a head node for the linked list.
    struct Node *head = NULL;

    // Add some nodes to the linked list.
    struct Node *node1 = malloc(sizeof(struct Node)); // Allocate memory for node1
    if (node1 == NULL)
    {
        printf("Memory allocation failed for node1\n");
        return 1;
    }
    node1->data = 10;
    node1->next = NULL;
    head = node1;

    struct Node *node2 = malloc(sizeof(struct Node)); // Allocate memory for node2
    if (node2 == NULL)
    {
        printf("Memory allocation failed for node2\n");
        return 1;
    }
    node2->data = 20;
    node2->next = NULL;
    node1->next = node2;

    // Print the values of the linked list.
    struct Node *current_node = head;
    while (current_node != NULL)
    {
        printf("%d\n", current_node->data);
        current_node = current_node->next;
    }

    // Free allocated memory when you're done
    free(node1);
    free(node2);

    return 0;
}

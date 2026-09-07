#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createCircular(int n) {
    if (n <= 0) return NULL;

    struct Node *head = NULL, *temp = NULL;

    for (int i = 1; i <= n; i++) {
        struct Node *newNode = malloc(sizeof(*newNode));
        if (!newNode) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }

        printf("Enter data for node %d: ", i);
        if (scanf("%d", &newNode->data) != 1) {
            free(newNode);
            return head;
        }

        newNode->next = NULL;
        if (!head)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    temp->next = head;
    return head;
}

void display(const struct Node *head) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }

    const struct Node *t = head;
    do {
        printf("%d ", t->data);
        t = t->next;
    } while (t != head);
    printf("\n");
}

void freeCircular(struct Node *head) {
    if (!head) return;
    struct Node *t = head->next;
    while (t != head) {
        struct Node *next = t->next;
        free(t);
        t = next;
    }
    free(head);
}

int main(void) {
    int n;
    printf("Enter number of nodes: ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;

    struct Node *head = createCircular(n);
    printf("Circular Linked List: ");
    display(head);

    freeCircular(head);
    return 0;
}

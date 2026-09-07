#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int countNodes(struct Node *head) {
    if (!head) return 0;
    int count = 0;
    struct Node *temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

int main() {
    struct Node *n1 = malloc(sizeof(struct Node));
    struct Node *n2 = malloc(sizeof(struct Node));
    struct Node *n3 = malloc(sizeof(struct Node));
    n1->data = 10; n2->data = 20; n3->data = 30;
    n1->next = n2; n2->next = n3; n3->next = n1;

    printf("Total nodes in circular linked list = %d", countNodes(n1));
    return 0;
}
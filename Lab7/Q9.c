#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node* createList(int n) {
    struct Node *head = NULL, *temp, *newNode;
    int data, i;

    for (i = 1; i <= n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
            head = temp = newNode;
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    return head;
}

void display(struct Node *head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    struct Node *head = createList(n);
    printf("Doubly Linked List: ");
    display(head);
    return 0;
}

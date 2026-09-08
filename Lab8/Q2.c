#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *top = NULL;

void push() {
    int val;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter element to push:");
    scanf("%d", &val);
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

void pop() {
    struct node *temp;
    if (top == NULL)
        printf("Stack is empty!!\n");
    else {
        printf("Deleted element is %d\n", top->data);
        temp = top;
        top = top->next;
        free(temp);
    }
}

void display() {
    struct node *temp = top;
    if (top == NULL)
        printf("Stack is empty!!\n");
    else {
        printf("Stack is...\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int ch;
    while (1) {
        printf("*** Stack Menu ***\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice(1-4):");
        scanf("%d", &ch);
        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!!\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* Delete_Beginning(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node* Delete_End(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    return head;
}

struct Node* Delete_Position(struct Node *head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (pos == 1) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        return head;
    }

    struct Node *del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}

void Display(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int choice, pos, val;

    while (1) {
        printf("\nMenu:\n1.Delete Beginning\n2.Delete Position\n3.Delete End\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = Delete_Beginning(head);
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);
                head = Delete_Position(head, pos);
                break;
            case 3:
                head = Delete_End(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
        Display(head);
    }
}

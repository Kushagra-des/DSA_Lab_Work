#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node *head = NULL;

struct Node *createNode(int data) {
    struct Node *n = malloc(sizeof(*n));
    if (!n) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    n->data = data;
    n->prev = n->next = NULL;
    return n;
}

void insertBeg(int data) {
    struct Node *n = createNode(data);
    n->next = head;
    if (head) head->prev = n;
    head = n;
}

void insertEnd(int data) {
    struct Node *n = createNode(data);
    if (!head) {
        head = n;
        return;
    }
    struct Node *t = head;
    while (t->next) t = t->next;
    t->next = n;
    n->prev = t;
}

void insertPos(int pos, int data) {
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    if (pos == 1) {
        insertBeg(data);
        return;
    }

    struct Node *t = head;
    for (int i = 1; i < pos - 1 && t; i++) t = t->next;

    if (!t) {
        printf("Invalid position.\n");
        return;
    }

    struct Node *n = createNode(data);
    n->next = t->next;
    n->prev = t;
    if (t->next) t->next->prev = n;
    t->next = n;
}

void delBeg(void) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }
    struct Node *t = head;
    head = head->next;
    if (head) head->prev = NULL;
    free(t);
}

void delEnd(void) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }
    struct Node *t = head;
    while (t->next) t = t->next;
    if (t->prev) t->prev->next = NULL;
    else head = NULL;
    free(t);
}

void delPos(int pos) {
    if (pos < 1 || !head) {
        printf("Invalid position or empty list.\n");
        return;
    }
    if (pos == 1) {
        delBeg();
        return;
    }

    struct Node *t = head;
    for (int i = 1; i < pos && t; i++) t = t->next;
    if (!t) {
        printf("Invalid position.\n");
        return;
    }

    t->prev->next = t->next;
    if (t->next) t->next->prev = t->prev;
    free(t);
}

void display(void) {
    for (struct Node *t = head; t; t = t->next)
        printf("%d ", t->data);
    printf("\n");
}

void freeList(void) {
    while (head) delBeg();
}

int main(void) {
    int ch, data, pos;
    while (1) {
        printf("\n1.InsertBeg 2.InsertPos 3.InsertEnd 4.DelBeg 5.DelPos 6.DelEnd 7.Display 8.Exit\n");
        if (scanf("%d", &ch) != 1) break;

        switch (ch) {
        case 1:
            printf("Data: "); scanf("%d", &data); insertBeg(data); break;
        case 2:
            printf("Pos & Data: "); scanf("%d%d", &pos, &data); insertPos(pos, data); break;
        case 3:
            printf("Data: "); scanf("%d", &data); insertEnd(data); break;
        case 4: delBeg(); break;
        case 5:
            printf("Pos: "); scanf("%d", &pos); delPos(pos); break;
        case 6: delEnd(); break;
        case 7: display(); break;
        case 8: freeList(); return 0;
        default: printf("Invalid choice.\n");
        }
    }
    freeList();
    return 0;
}

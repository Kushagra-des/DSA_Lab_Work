#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

void push(char x) {
    if (top < MAX - 1) stack[++top] = x;
}

char pop(void) {
    return top >= 0 ? stack[top--] : '\0';
}

void reverse(char *s) {
    size_t n = strlen(s);
    for (size_t i = 0; i < n / 2; i++) {
        char t = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = t;
    }
}

int isRightAssociative(char op) {
    return op == '^';
}

int main(void) {
    char infix[MAX], prefix[MAX];
    int j = 0;

    printf("Enter Infix Expression: ");
    if (scanf("%99s", infix) != 1) return 1;

    reverse(infix);

    for (size_t i = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];

        if (isalnum((unsigned char)ch)) {
            prefix[j++] = ch;
        } else if (ch == ')') {
            push(ch);
        } else if (ch == '(') {
            while (top != -1 && stack[top] != ')')
                prefix[j++] = pop();
            if (top != -1) pop();
        } else {
            while (top != -1 && stack[top] != ')' &&
                   (precedence(stack[top]) > precedence(ch) ||
                    (precedence(stack[top]) == precedence(ch) &&
                     !isRightAssociative(ch)))) {
                prefix[j++] = pop();
            }
            push(ch);
        }
    }

    while (top != -1)
        if (stack[top] != ')') prefix[j++] = pop(); else pop();

    prefix[j] = '\0';
    reverse(prefix);

    printf("Prefix Expression: %s\n", prefix);
    return 0;
}

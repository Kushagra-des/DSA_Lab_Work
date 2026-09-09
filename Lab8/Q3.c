#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

void push(char *str) {
    strcpy(stack[++top], str);
}

char *pop() {
    return stack[top--];
}

int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int main() {
    char postfix[MAX], op1[MAX], op2[MAX], temp[MAX], symbol;
    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);

    for (int i = 0; postfix[i] != '\0'; i++) {
        symbol = postfix[i];
        if (isOperator(symbol)) {
            strcpy(op2, pop());
            strcpy(op1, pop());
            sprintf(temp, "(%s%c%s)", op1, symbol, op2);
            push(temp);
        } else {
            char str[2] = {symbol, '\0'};
            push(str);
        }
    }

    printf("Infix Expression: %s\n", stack[top]);
    return 0;
}

#include <stdio.h>
#include <string.h>

void replaceChar(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }

    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar);

    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    replaceChar(str, oldChar, newChar);

    printf("Modified string: %s\n", str);

    return 0;
}
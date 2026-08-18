#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        // Swap characters
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if(len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }

    reverseString(str); 

    printf("Reversed string: %s\n", str);

    return 0;
}

#include <stdio.h>

void concat(char *s1, char *s2) {
    while (*s1) s1++;
    while (*s2) *s1++ = *s2++;
    *s1 = '\0'; 
}

int main() {
    char str1[100], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i]; i++) if (str1[i] == '\n') str1[i] = '\0';
    for (int i = 0; str2[i]; i++) if (str2[i] == '\n') str2[i] = '\0';

    concat(str1, str2);

    printf("Concatenated string: %s\n", str1);
    return 0;
}
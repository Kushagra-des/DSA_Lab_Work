#include <stdio.h>
#include <string.h>

int findWord(char sentence[], char word[]) {
    if (strstr(sentence, word) != NULL)
        return 1;
    else
        return 0;
}
int main() {
    char sentence[200], word[50];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n')
        sentence[len - 1] = '\0';

    printf("Enter the word to find: ");
    scanf("%s", word);

    if (findWord(sentence, word))
        printf("Word found in the sentence.\n");
    else
        printf("Word not found in the sentence.\n");

    return 0;
}
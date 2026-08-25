#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORDS 100
#define MAX_LEN 50

int inVocabulary(char *word, char vocab[][MAX_LEN], int vocabCount) {
    int i;
    for (i = 0; i < vocabCount; i++) {
        if (strcmp(word, vocab[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char text[] = "the sun rises in the east";
    char vocabulary[][MAX_LEN] = {"sun", "in", "east", "doctor", "day"};
    int vocabCount = 5;

    char unknownWords[MAX_WORDS][MAX_LEN];
    int unknownCount = 0;

    char temp[MAX_LEN];
    int i = 0, j = 0, k;

    while (1) {
        char c = text[i];
        if (isalpha(c)) {
            temp[j++] = tolower(c);
        } else if (j > 0) {
            temp[j] = '\0';
            if (!inVocabulary(temp, vocabulary, vocabCount)) {
                int alreadyExists = 0;
                for (k = 0; k < unknownCount; k++) {
                    if (strcmp(temp, unknownWords[k]) == 0) {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) {
                    strcpy(unknownWords[unknownCount++], temp);
                }
            }
            j = 0;
        }
        if (c == '\0') break;
        i++;
    }

    if (unknownCount > 0) {
        printf("{ ");
        for (k = 0; k < unknownCount; k++) {
            printf("\"%s\"", unknownWords[k]);
            if (k < unknownCount - 1) printf(", ");
        }
        printf(" }\n");
    } else {
        printf("Successful\n");
    }

    return 0;
}

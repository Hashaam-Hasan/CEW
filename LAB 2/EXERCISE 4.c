#include <stdio.h>

int main() {
    char sentence[1000];
    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            if (islower(sentence[i])) {
                sentence[i] = toupper(sentence[i]);
            } else {
                sentence[i] = tolower(sentence[i]);
            }
        }
    }

    printf("Replaced sentence: %s\n", sentence);

    return 0;
}


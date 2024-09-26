#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char message[1000];
        scanf("%s", message);

        char encryptedMessage[1000];
        int keys[1000];

        for (int i = 0; i < strlen(message); i++) {
            if (isVowel(message[i])) {
                encryptedMessage[i] = message[i];
                keys[i] = 0;
            } else {
                char vowel = message[i];
                while (!isVowel(--vowel)) {
                    // Find the nearest previous vowel
                }
                encryptedMessage[i] = vowel;
                keys[i] = message[i] - vowel;
            }
        }

        printf("Case #%d:\n", t);
        printf("%s\n", encryptedMessage);
        for (int i = 0; i < strlen(message); i++) {
            printf("%d", keys[i]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

// Function to convert a character to its number if applicable, otherwise return it as is
char convertChar(char c) {
    switch (c) {
        case 'i':
        case 'I': return '1';
        case 'r':
        case 'R': return '2';
        case 'e':
        case 'E': return '3';
        case 'a':
        case 'A': return '4';
        case 's':
        case 'S': return '5';
        case 'g':
        case 'G': return '6';
        case 't':
        case 'T': return '7';
        case 'b':
        case 'B': return '8';
        case 'p':
        case 'P': return '9';
        case 'o':
        case 'O': return '0';
        default: return c;
    }
}

int main() {
    char sentence[10000];  // Assuming the maximum input size is 10,000 characters

    // Read the input sentence
    fgets(sentence, sizeof(sentence), stdin);

    // Convert the sentence to uppercase
    for (int i = 0; sentence[i]; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] -= ('a' - 'A');
        }
    }

    // Apply the character mapping and print the converted sentence
    for (int i = 0; sentence[i]; i++) {
        printf("%c", convertChar(sentence[i]));
    }

    return 0;
}


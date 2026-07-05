#include <stdio.h>

int main() {
    char alphabet[26];
    char *ptr;

    // Initialize the alphabet array
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }

    // Pointer to the start of the alphabet array
    ptr = alphabet;

    // Print all the letters using the pointer
    printf("English Alphabet:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }
    printf("\n");

    return 0;
}


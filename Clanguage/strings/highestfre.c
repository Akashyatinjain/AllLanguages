#include <stdio.h>
#include <string.h>

void calculateFrequency(const char *str) {
    int frequency[26] = {0}; // Array to store the frequency of each letter

    // Traverse the string and update the frequency array
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            frequency[str[i] - 'A']++;
        }
    }
    // Print the frequency of each letter
    printf("Letter Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] != 0) {
            printf("%c: %d\n", i + 'A', frequency[i]);
        }
    }
}

int main() {
    char str[100];
    // Get input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove the newline character, if any
    str[strcspn(str, "\n")] = 0;

    // Calculate and print the frequency of each letter
    calculateFrequency(str);
    return 0;
}

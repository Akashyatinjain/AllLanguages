#include <stdio.h>
#include <string.h>

void convertVowelsToUpper(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            *ptr = *ptr - 32;  // Convert to uppercase
        }
        ptr++;
    }
}

int main() {
    char str[100];

    // Get input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character, if any
    str[strcspn(str, "\n")] = 0;

    // Convert lowercase vowels to uppercase
    convertVowelsToUpper(str);

    // Print the result
    printf("String with uppercase vowels: %s\n", str);

    return 0;
}
/*#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "lion";
    const char str2[] = "aeiou";
    size_t length;

    // Calculate the length of the initial segment of str1 that does not contain any vowel
    length = strcspn(str1, str2);

    // Print the result
    printf("The initial segment length of '%s' without vowels is: %zu\n", str1, length);

    return 0;
}*/


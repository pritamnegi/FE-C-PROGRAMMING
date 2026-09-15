#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a word in lowercase: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } 
        // If it's not a vowel but is a lowercase letter, it's a consonant
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Vowels count: %d\n", vowels);
    printf("Consonants count: %d\n", consonants);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* ToPigLatin(char* word) {
	int i;
    static char pigLatinWord[45]; // Buffer to hold the Pig Latin version, assuming max 39 chars + "way" + null terminator
    int vowelIndex = -1; // Index of the first vowel in the word
    int length = strlen(word);

    // Check if the first character is a vowel or 'y'
    if (strchr("aeiouAEIOU", word[0]) != NULL) {
        sprintf(pigLatinWord, "%sway", word);
        return pigLatinWord;
    }

    // Find the index of the first vowel in the word
    for (i = 1; i < length; i++) {
        if (strchr("aeiouyAEIOUY", word[i]) != NULL) {
            vowelIndex = i;
            break;
        }
    }

    // If there are no vowels in the word, return the original word
    if (vowelIndex == -1) {
        strcpy(pigLatinWord, word);
        return pigLatinWord;
    }

    // Move the consonants before the first vowel to the end of the word and add "ay"
    sprintf(pigLatinWord, "%s%.*say", word + vowelIndex, vowelIndex, word);

    // Capitalize the first letter if the original word was capitalized
    if (isupper(word[0])) {
        pigLatinWord[0] = toupper(pigLatinWord[0]);
        pigLatinWord[vowelIndex] = tolower(pigLatinWord[vowelIndex]);
    }

    return pigLatinWord;
}

int main() {
	int i;
    char word[40]; // Buffer for input word
    printf("Input 5 words: ");
    for (i = 0; i < 5; i++) {
        scanf("%39s", word); // Read a word from input
        printf("%s ", ToPigLatin(word)); // Convert to Pig Latin and print
    }
    printf("\n");
    
}


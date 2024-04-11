#include <stdio.h>
#include <string.h>

int main() {
    char input[11]; // Buffer for 10 characters + null terminator
    printf("Input a string (up to 10 characters): ");
    scanf("%10s", input); // Read up to 10 characters

    for (int i = 0; i < strlen(input); i++) {
        printf("%s\n", input + i); // Print the string starting from the ith character
    }


}


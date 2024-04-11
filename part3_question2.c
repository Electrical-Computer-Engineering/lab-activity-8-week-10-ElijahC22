#include <stdio.h>
#include <string.h>

void removeChars(char *s1, const char *s2) {
	
    int hash[256]; // Declare the hash array without initializing
    int s1Index = 0, s1Len = strlen(s1);
	int i;
    
    for (i = 0; i < 256; i++) {
        hash[i] = 0;
    }

    // Mark characters present in s2
    for (i = 0; s2[i] != '\0'; i++) {
        hash[(unsigned char)s2[i]] = 1;
    }

    // Remove characters from s1 that are present in s2
    for (i = 0; i < s1Len; i++) {
        if (!hash[(unsigned char)s1[i]]) {
            s1[s1Index++] = s1[i];
        }
    }
    s1[s1Index] = '\0'; // Null-terminate the modified string
}

int main() {
    char s1[100] = "Hi ESE 124!";
    char s2[100] = "Hi !";

    printf("Input:\ns1: %s\ns2: %s\n", s1, s2);

    removeChars(s1, s2);

    printf("Output:\n%s\n", s1);

}


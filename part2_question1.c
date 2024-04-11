#include <stdio.h>
#include <string.h>

#define MAX 32

int my_strcmp(char s1[], char s2[]) {
    int i;	
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return 1;
        }
    }
    return 0;
}

int my_strncmp(char s1[], char s2[], int n) {
    int i;
    for (i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return 1;
        }
    }
    return 0;
}

char *my_strcpy(char s1[], char s2[]) {
    int i;
    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    return s1;
}

char *my_strcat(char s1[], char s2[]) {
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        // Find the end of the first string
    }
    for (j = 0; s2[j] != '\0'; j++, i++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    return s1;
}

char *my_reverse(char s1[], char s2[]) {
    int i;
    int len = strlen(s2);
    for (i = 0; i < len; i++) {
        s1[i] = s2[len - 1 - i];
    }
    s1[len] = '\0';
    return s1;
}

int main() {
    char s1[MAX] = "HI ESE";
    char s2[MAX] = "BYE ESE";
    int result;
    int i;
//i was unsure whether the strings needed to be input by user or if they could be preset but if they needed to be input by user please leave comment
    for (i = 0; i < 2; i++) {
        // Test my_strcmp
        result = my_strcmp(s1, s2);
        printf("my_strcmp: %s and %s are ", s1, s2);
        if (result == 0) {
            printf("equal\n");
        } else {
            printf("not equal\n");
        }

        // Test my_strncmp
        result = my_strncmp(s1, s2, 2);
        printf("my_strncmp (first 2 chars): %s and %s are ", s1, s2);
        if (result == 0) {
            printf("equal\n");
        } else {
            printf("not equal\n");
        }

        // Test my_strcpy
        my_strcpy(s1, s2);
        printf("my_strcpy: s1 is now %s\n", s1);

        // Reset s1
        strcpy(s1, "HI ESE");

        // Test my_strcat
        my_strcat(s1, s2);
        printf("my_strcat: s1 is now %s\n", s1);

        // Test my_reverse
        my_reverse(s1, s2);
        printf("my_reverse: s1 is now %s\n", s1);
    }
}

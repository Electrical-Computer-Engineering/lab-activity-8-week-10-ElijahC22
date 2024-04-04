#include <stdio.h>

int i;
int my_strcmp(char s1[], char s2[]) {
		for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){	//seeing which string is larger by stopping at the \0
	return s1[i] != s2[i];		//if they are not equal 1, if they are equal 0
	}
}

int my_strncmp(char s1[], char s2[],int n) {
		for(i = 0; s1[i] != "%c" && s2[i] != "%c"; i++){	//seeing which string is larger by stopping at n, however many characters the user wants
	return s1[i] != s2[i];		//if they are not equal 1, if they are equal 0
	}
}

int my_strcpy(char s1[], char s2[]) {
		for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){	//seeing which string is larger by stopping at the \0
			temp[i] = s1[i];		//these two lines copy s2 into s1
			s1[i] = s2[i];
	}
}

int my_strcat(char s1[], char s2[]) {
		for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){	//seeing which string is larger by stopping at the \0
			s1[i] += s2[i];		//add s2 to s1
	}
}

int my_reverse(char s1[], char s2[]) {
		for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){	//seeing which string is larger by stopping at the \0
		for(i = 0; i < s2[i] / 2; i++){		//reverse the second string
			temp[i] = s1[i];		//inputing reversed second string into first string
			s1[i] = s2[i];
		}
	}
}
#define MAX 32
int main(){
	char s1[MAX] = "HI ESE";
	char s2[MAX] = "BYE ESE";
	char d;
	int count = 2;
	
	for (i = 0; i < count; i++){
		
		int d = my_strcmp(s1, s2);		//use function to determin if alpha
		if(d == 1){
			printf("These strings are not equal");
		}
		else{
			printf("These strings are equal\n");
		}
	}
		
		
		
	}
	
	
	
	
}


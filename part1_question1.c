#include <stdio.h>

int my_isalpha(char c) {
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
int my_isdigit(char c) {
	return c >= '0' && c <= '9';
}
int my_isupper(char c) {
	return c >= 'A' && c <= 'Z';
}
int my_toupper(char c) {
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}
int my_tolower(char c) {
	if (c >= 'A' && c <= 'Z')
		return c - 'A' + 'a';
	return c;
}
int main() {
	char c;
	char d;
	int i;
	int count = 2;
	
	for (i = 0; i < count; i++){
		printf("Enter alphabetic character: ");
		scanf("%c", &c); getchar();
		int d = my_isalpha(c);		//use function to determin if alpha
		if(d == 1){
			printf("This is an alphabet character\n");
		}
		else{
			printf("This is not an alphabetic character\n");
		}
	}
	printf("\n");
	
	for (i = 0; i < count; i++){
		printf("Enter a digit: ");
		scanf("%c", &c);getchar();
		int d = my_isdigit(c);		//use function to determin if digit
		if(d == 1){
			printf("This is a digit\n");
		}
		else{
			printf("This is not a digit\n");
		}
	}
	
	printf("\n");
	for (i = 0; i < count; i++){
		printf("Enter an uppercase character: ");
		scanf("%c", &c); getchar();
		int d = my_isupper(c);		//use function to determin uppercase
		if(d == 1){
			printf("This is an uppercase character\n");
		}
		else{
			printf("This is not an uppercase character\n");
		}
	}
	
	printf("\n");
	for (i = 0; i < count; i++){
		printf("Enter lowercase alphabetic character to make uppercase: ");
		scanf("%c", &c);getchar();
		int d = my_toupper(c);		//use function to make upper if lower
		if(c >= 'a' && c <= 'z'){
			printf("Your new character is %c\n", d);
		}
		else{
			printf("%c is already uppercase\n", c);
		}
	}
	
	printf("\n");
	for (i = 0; i < count; i++){
		printf("Enter uppercase alphabetic character to make lowercase: ");
		scanf("%c", &c);getchar();
		int d = my_tolower(c);		//use function to make uppercase lowercase
		if(c >= 'A' && c <= 'Z'){
			printf("Your new character is %c\n", d);
		}
		else{
			printf("%c is already lowercase\n", c);
		}
	}
	
	
	
}





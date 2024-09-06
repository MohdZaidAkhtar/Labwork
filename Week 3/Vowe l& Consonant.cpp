#include<stdio.h>

// write a c program to check  whether a character is a vowel or consonant.

int main(){
	char a;
	
	printf("Enter a Character: ");
	scanf("%c", &a);
	
	if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
	printf("Character is Vowel");
	
	}
	else{
	printf("Character is Consonant");
	}
}


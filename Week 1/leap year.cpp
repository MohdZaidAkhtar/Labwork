#include<stdio.h>

// Write a C Program to determine if the entered year is leap year or not 
int main(){
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	
	if((year % 4 == 0 && year % 100 !=0)||(year % 400 == 0)){
	printf("%d is a leap year", year);
	}
	else{
		printf("%d is not a leap year", year);
	}
}

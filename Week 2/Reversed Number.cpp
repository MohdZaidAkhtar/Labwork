#include<stdio.h>

int main(){
	int num, reversed = 0, remainder, onum;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	
	while(num != 0){
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}
	
	printf("Reversed Number is: %d", reversed);
	
	return 0;
}

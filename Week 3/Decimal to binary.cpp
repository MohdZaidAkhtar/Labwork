#include<stdio.h>

int main(){
	int decimal, remainder;
	long binary = 0;
	int place = 1;
	
	printf("Enter a number: ");
	scanf("%d", &decimal);
	
	while(decimal > 0){
		remainder = decimal % 2;
		binary += remainder * place;
		decimal /= 2;
		place *= 10;
	}
	printf("Binary number is: %lu", binary);
	
	return 0;
}

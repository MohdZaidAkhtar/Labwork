#include<stdio.h>

int main(){
	int num, sum = 0, digits;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digits = num % 10;
		sum += digits;
		num /= 10;
	}
	printf("Sum of digits is: %d", sum);
	
	return 0;
}

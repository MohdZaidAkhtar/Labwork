#include<stdio.h>

int main(){
	int a, b;
	char op;
	
	printf("Enter a Positive Number a: ");
	scanf("%d", &a);
	
	printf("Enter Operator: ");
	getchar();
	scanf("%c", &op);
	
	printf("Enter a Positive Number b: ");
	scanf("%d", &b);
	

	if(op == '+'){
		int sum = a + b;
		printf("Sum is: %d", sum);
	}
	else if(op == '-'){
		int sub = a - b;
		printf("Subtraction is: %d", sub);
	}
	else if(op == '*'){
		int mul = a * b;
		printf("Multiplication is: %d", mul);
	}
	else if(op == '/'){
		float div = a / b;
		printf("Division is: %f", div);
	}
	return 0;
}

#include<stdio.h>
#define MAX 5

int main(){
	int stack[MAX];
	int top = -1;
	int choice, value;
	
	while(1){
		printf("\n--Stack Menu--\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter Your Choice: \n");
		scanf("%d", &choice);
		
		if(choice == 1){
			if(top == MAX - 1){
				printf("Stack Overflow! Try Again");
			}
			else{
				printf("Enter the value to push: ");
				scanf("%d", &value);
				top++;
				stack[top] = value;
				printf("%d pushed onto the stack.\n", value);
			}
		}
		else if(choice == 2){
			if(top == -1){
				printf("Stack Underflow! Try again");
			}
			else{
				printf("%d popped from the stack.\n", stack[top]);
				top--;
			}
		}
		else if(choice == 3){
			if(top == -1){
				printf("Stack is empty");
			}
			else{
				printf("Stack elements are: ");
				for(int i = top; i >= 0; i--){
					printf("%d ", stack[i]);
				}
				printf("\n");
			}
		}
		else if(choice == 4){
			break;
		}
		else{
			printf("Invalid Choice! Try Again.\n");
		}
	}
	return 0;
}

#include<stdio.h>

int main(){
	int n1 = 0, n2 = 1, nextnumber;
	
	printf("Fibonacci sequence: ");
	
	for(int i = 1; i <= 10; i++){
		printf("%d ", n1);
		nextnumber = n1 + n2;
		n1 = n2;
		n2 = nextnumber;
	}
	return 0;
}

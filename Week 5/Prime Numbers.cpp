#include<stdio.h>

int main(){
	
	int a, b;
	
	printf("Enter Range: ");
	scanf("%d %d", &a, &b);
	
	for(int i = a; i <= b; i++){
		int c = 0;
		for(int j = 2; j < i; j++){
			if(i % j == 0){
				c++;
			}
		}
		if(c == 0){
			printf(" %d ", i);
		}
	}
}

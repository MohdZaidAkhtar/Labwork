#include<stdio.h>

int main(){
	
	int a, b, hcf = 0, lcm; 
	
	printf("Enter Two Positive Number: ");
	scanf("%d %d", &a, &b);
	
	for(int i = 1; i <= b; i++){
		if(a % i == 0 && b % i == 0){
			hcf = i;
		}
		lcm = (a*b/hcf);
		
	}
	printf("HCF is: %d ", hcf);
	printf("LCM is: %d ", lcm);
}

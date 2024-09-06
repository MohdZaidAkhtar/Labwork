#include<stdio.h>

//write a c program to check if the entered number is palindrome or not.

int main (){
	int num, rnum = 0, reminder, onum;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	onum = num;
	
	while (num > 0){
		reminder = num %10;
		rnum = rnum * 10 + reminder;
		num /= 10;
	}
	
	if(onum == rnum){
		printf("Number is Palindrome");
	}else{
		printf("Number is Not Palindrome");
	}
	return 0;
}

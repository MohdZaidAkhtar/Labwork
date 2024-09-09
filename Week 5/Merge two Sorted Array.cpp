#include<stdio.h>

int main(){
	int arr1[] = {2,4,6,7,9};
	int arr2[] = {1,3,5,8,10};
	
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	
	int n = size1 + size2;
	int arr3[n];
	
	int i = 0, j = 0, k = 0;
	while(i < size1 && j < size2){
		if(arr1[i] < arr2[j]){
		arr3[k++] = arr1[i++];
	}
	else{
		arr3[k++] = arr2[j++];
	}
}

	while(i < size1){
		arr3[k++] = arr1[i++];
	}
	while(j < size2){
		arr3[k++] = arr2[j++];
	}
	
	printf("Merged sorted Array: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr3[i]);
	}
	printf("\n");
	return 0;
	
}

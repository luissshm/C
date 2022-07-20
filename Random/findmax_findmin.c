#include <stdio.h>

int findmax(const int a[], int len) {
	int curr_max, i;
	
	if(len == 1)
		return a[0];
	else if(len == 0)
		return 0;
	
	curr_max = a[0];
	for(i = 1; i < len; i++)
		if(a[i] > curr_max)
			curr_max = a[i];
	
	return curr_max;
}

int findmin(const int a[], int len) {
	int curr_min, i;
	
	if(len == 1)
		return a[0];
	else if(len == 0)
		return 0;
	
	curr_min = a[0];
	for(i = 1; i < len; i++)
		if(a[i] < curr_min)
			curr_min = a[i];
	
	return curr_min;
}

int main(){

    int arr[] = {1,2,3,200,5,6,7,8,100,-6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result_max = findmax(arr,size);
    int result_min = findmin(arr,size);
    printf("The max element in the array is: %d", result_max);
    printf("\nThe min element in the array is: %d", result_min);

    return 0;
}
// Kadane Algorithm
#include <stdio.h>
#include <stdlib.h>
#define len 10
int maxSum(int *arr){
	// add all positive numbers until a negative one is reached
	int i;
	int max = -100000, currSum = 0, subSum = 0, max_ending here = 0;
	for(i=0;i<len;i++){
		max_ending_here += arr[i];
		if(max_ending_here<0) max_ending_here = 0;
		if(arr[i]>0){
			currSum += arr[i];
			subSum += arr[i];
			if(currSum>max) max=currSum; // replace max value if greater
			else if(subSum>max) max=subSum;
		}else{
			currSum += arr[i];
			subSum = 0;
			if(currSum>max) max=currSum; 
			if(A[i]>max) max=A[i];
		}
		if(meh>0) if(max_ending_here>max) max = max_ending_here;
	}
	return max;

}

int main(){

	int Arr[len] = {3,5,8,-2,14,-23,17,5,6,9};
	int result = maxSum(Arr);
	printf("%d\n",result);
	return 0;
}
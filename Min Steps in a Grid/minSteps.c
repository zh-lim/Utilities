#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; });

int min_steps(int len, int (*A)[2]){
	int i, steps=0;
	// int *arrX = (int *) malloc((len) * sizeof(int)), *arrY = (int *) malloc((len) * sizeof(int));
	int currentX = A[i][0], currentY = A[i][1];
	for(i=1;i<len;i++){
		steps += max(abs(A[i][0]-currentX),abs(A[i][1]-currentY));
		currentX = A[i][0];
		currentY = A[i][1];
	}
	return steps;
}

int main(){
	printf("this solves for minimum steps in a grid \n");
	int Arr[4][2] = {{-2,0},{1,1},{2,1},{-1,4}};
	int result = min_steps(4,Arr);
	printf("%d\n", result);
	return 0;
}
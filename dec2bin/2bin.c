#include <stdio.h>
#include <stdlib.h>

char* findDigitsInBinary(int A) {
	// SAMPLE CODE
	/*
	 * char* result = (char *)malloc(100 * sizeof(char));
	 * // DO STUFF HERE
	 * return result; 
	 */
	 char* result = (char *)malloc(100 * sizeof(char));
	 int* tmp = (int *)malloc(100 * sizeof(int));
	 int i=A, rem, ct=0;
	 while(i>0){
	     rem = i%2;
	     tmp[ct] = rem;
	     ct++;
	     i=i/2;
	 }
	 
	 int j=0;
	 if(A==0) result[j] = '0';
	 for(j=0;j<ct;j++){
	     result[j] = tmp[ct-j-1] + '0';
	 }
	 result[j+1] = '\0';
	 return result;
}

int main(){
	findDigitsInBinary(7);
	return 0;
}
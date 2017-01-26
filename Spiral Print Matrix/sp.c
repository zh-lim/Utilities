/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* spiralOrder(const int** A, int n11, int n12, int *length_of_array) {
	 *length_of_array = n11 * n12; // length of result array
	 int *result = (int *) malloc(*length_of_array * sizeof(int));
	 // DO STUFF HERE
	 int T=0, B=n11-1, L=0, R=n12-1, dir=0,i=0, x;
	 while(T<=B && L<=R){
	     if(dir==0){
	        for(x=L;x<=R;x++){
	         result[i] = A[T][x];
	         i++;
	       //  printf("%d %d\n",dir, result[i-1]);
	        }
	        T++;
	        dir = 1;
	     }else if(dir==1){
	         for(x=T;x<=B;x++){
	             result[i] = A[x][R];
	             i++;
	           //  printf("%d %d\n",dir, result[i-1]);
	         }
	         R--;
	         dir = 2;
	     }else if(dir==2){
	         for(x=R;x>=L;x--){
	             result[i] = A[B][x];
	             i++;
	           //  printf("%d %d\n",dir, result[i-1]);
	         }
	         B--;
	         dir = 3;
	     }else if(dir==3){
	         for(x=B;x>=T;x--){
	             result[i] = A[x][L];
	             i++;
	           //  printf("%d %d\n",dir, result[i-1]);
	         }
	         L++;
	         dir = 0;
	     }
	 }
	 return result;
}

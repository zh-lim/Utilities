int* allFactors(int A, int *length_of_array) {
         int *res = (int *) malloc(10000 * sizeof(int));
         int i,x=0;
         for(i=1;i<=(int)sqrt(A);i++)
         {
             if(A%i==0)
             res[x++]=i;
         }
         int y=x;
         for(i=x-1;i>=0;i--)
         {
             if(A%res[i]==0 && res[i]!=(A/res[i]))
             res[y++]=A/res[i];
         }
         *length_of_array=y;
         return res;
}
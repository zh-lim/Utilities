int* sieve(int A, int *length_of_array) {
	// SAMPLE CODE
        
        // *length_of_array = A; // length of result array
        int *result = (int *) malloc(10000000 * sizeof(int));
        int *primes = (int *) malloc((A+1) * sizeof(int));
        int x;
        for(x=0;x<=A;x++){
            primes[x] = 1;
        }
        primes[0] = 0;
        primes[1] = 0;
        // DO STUFF HERE. NOTE : length_of_array is inaccurate here. 
        int i,j,id;
        for(i=2;i<=sqrt(A);i++){
            if(primes[i]==1){
                for(j=2;i*j<=A;j++){
                    primes[i*j]=0;
                }
            }
        }
        for(i=2;i<=A;i++){
            if(primes[i]==1){
                result[id] = i;
                id++;
                
            }
        }
        *length_of_array = id;
        return result;
        
}

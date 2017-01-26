int isPrime(int A) {
    int i;
    if(A==1){
      return 0; 
    } 
    for(i=2;i<=sqrt(A);i++){
        if(A%i==0) return 0;
    }
    return 1;
}

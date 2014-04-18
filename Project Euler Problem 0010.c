#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n);

int main(){
    int largest;
    int i, check=3;
    int target=2000000;
    long long sum=2;

    while(check<target){
        if(isPrime(check)){
//          printf(" %d", check);
            sum=sum+check;
        }
        check=check+2;
    }
    printf("The sum is: %lld\n", sum);

    return 0;
}

int isPrime(int n){
    int i;

    if (n<=1) return 0;
    else if (n==2) return 1;
    else if (n%2==0) return 0;
    else for(i=3; i<=sqrt(n); i=i+2){
        if (n%i==0) return 0;
    }
    return 1;
}

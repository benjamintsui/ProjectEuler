#include <stdio.h>
#include <math.h>

int main(){
    int check=1;
    int target=100;
    int primeCount=0;
    int primeWeWant=10001;
    int result=0;

//    printf("These numbers are prime:");

    while(1){
        if(isPrime(check)){
//          printf(" %d", check);
            primeCount++;
            if (primeCount==primeWeWant){
                result=check; break;
            }
        }
        check++;
    }
    printf("The prime we want is: %d", result);

    return 0;
}

int isPrime(int n){
    int i;

    if (n<=1) return 0;
    if (n==2) return 1;
    for(i=2; i<n; i++){
        if (n%i==0) return 0;
    }
}

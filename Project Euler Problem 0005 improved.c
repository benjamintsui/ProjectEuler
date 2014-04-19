#include <stdio.h>
#include <stdlib.h>
#include <math.h>   // for pow function
#define TARGET 20

int isPrime(int);

int main(){
    int i=2, j=2;
    int check=1;
    int remainder;
    float exponent;
    float leastCommonMultiple=1;
    float array[TARGET+1]={0};

    while(check<=TARGET){
        exponent=0;
        remainder=check;
        for(i=2; i<=remainder; i++){
            if(isPrime(remainder)==1){
                array[remainder]=1;
                exponent=0;
            }
            else {
                for(j=2; j<=remainder; j++){
                    while(isPrime(j)){          //
                        if(remainder%j==0){     // if divisible by prime, increase exponent and divide
                            exponent++;
                            remainder=remainder/j;
                            if(array[j]<exponent){  // if higher power of prime, assign to array
                                array[j]=exponent;
                            }
                        }
                        else{
                            exponent=0;
                            j++;
                        }
                    }
                }
            }
        }
        check++;
    }

    for(i=0; i<=TARGET; i++){
        leastCommonMultiple=leastCommonMultiple*pow(i, array[i]);
    }

    if(TARGET==0){
        printf("The least common multiple is: 0\n");
    }
    else{
        printf("The least common multiple is:: %.0f\n", leastCommonMultiple);
    }

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

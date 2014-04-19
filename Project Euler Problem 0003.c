#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TARGET 600851475143

int main(){
    int largest;
    int check=3;
    long long target=TARGET;

    while(check<=sqrt(target)){
        if(target%check==0){
            target=target/check;
            largest=check;
        }
        else check=check+2;
    }
    if (target>largest){
        largest=target;
    }
    printf("%d ", largest);

    return 0;
}

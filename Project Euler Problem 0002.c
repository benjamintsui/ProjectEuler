#include <stdio.h>
#include <stdlib.h>

int main(){
    int fibone=1;
    int fibtwo=2;
    int sum=0;

    while(fibtwo<4000000){
        if(fibtwo%2==0){
            sum=sum+fibtwo;
        }
        fibtwo=fibone+fibtwo;
        fibone=fibtwo-fibone;
    }
    printf("sum: %d\n", sum);

    return 0;
}

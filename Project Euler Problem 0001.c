#include <stdio.h>
#include <stdlib.h>

int main(){
    int count=1;
    int sum=0;

    while(count<1000){
        if((count%3==0) || (count%5==0)){
            sum=sum+count;
            count++;
        }
        else{
            count++;
        }
    }
    printf("sum: %d\n", sum);

    return 0;
}

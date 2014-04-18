#include <stdio.h>

int main(){
    int a, b, c, sum;

    sum=1000;
    for(a=1; a<=1000; a++){
        for(b=a; b<=1000; b++){
            c=sum-a-b;
            if((a*a+b*b)==(c*c)){
                printf("%d %d %d\n", a, b, c);
                printf("The product is: %d", a*b*c);
            }
        }
    }

    return 0;
}

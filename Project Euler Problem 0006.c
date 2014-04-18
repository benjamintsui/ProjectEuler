#include <stdio.h>
#define TARGET 100

int main(){
    int count=1;
    int sumSquares=0;
    int sum=0;
    int squareSums=0;
    int difference=0;

    while (count<=TARGET){
        sumSquares=sumSquares+count*count;
        sum=sum+count;
        count++;
    }
    squareSums=sum*sum;
    printf ("The difference is %d\n", squareSums-sumSquares);

    return 0;
}

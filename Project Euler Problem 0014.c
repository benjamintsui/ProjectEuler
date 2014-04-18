#include <stdio.h>
#include <stdlib.h>

long long ruleOne(long long n);
long long ruleTwo(long long n);

int main(){
    int chain, longestChain=0;
    long long i, currentNumber, afterRule, longestNumber=0;
    int target=1000000;

    for(currentNumber=1; currentNumber<target; currentNumber++){
        afterRule=currentNumber;
        chain=0;
        while(afterRule>1){
            if(afterRule%2==0){
                afterRule=ruleOne(afterRule);
                chain++;
            }
            else if(afterRule%2==1){
                afterRule=ruleTwo(afterRule);
                chain++;
            }
        }
        if(chain>longestChain){
            longestChain=chain;
            longestNumber=currentNumber;
        }
    }
    printf("The starting number with the longest chain is %lld.\nThe longest chain is %d", longestNumber, longestChain);

    return 0;
}

long long ruleOne(long long x){
    x=x/2;
    return x;
}

long long ruleTwo(long long x){
    x=3*x+1;
    return x;
}

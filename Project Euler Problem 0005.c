#include <stdio.h>
#define TARGET 20

int main(){
    int count=TARGET;
    int check=TARGET;

    while(check>1){
        if(count%check==0)
        check--;
        else{
            count=count+TARGET; check=TARGET;
        }
    }
    printf("count: %d\n", count);

    return 0;
}

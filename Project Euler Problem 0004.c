#include <stdio.h>
#include <stdlib.h> // for int to ascii function
#include <string.h>
#define MAXSIZE 20
#define MIN 100
#define MAX 999

int palindrome(char x[], int y);

int main(){
    char string[MAXSIZE]="";
    int i, j, len, product, maxProduct=0;

//    printf("BEGIN\n");
    for(i=MIN; i<=MAX; i++){
        for(j=MIN; j<=MAX; j++){
            product=i*j;
            itoa(product, string, 10);
            len=strlen(string);
            if(palindrome(string, len)==1){
                if (product>maxProduct){
//                    printf("New MAX found: %d\n", product);
                    maxProduct=product;
                }
            }
        }
    }
    printf("The max product is %d\n", maxProduct);

    return 0;
}

int palindrome(char x[], int y){
    int i;
    char temp[MAXSIZE];

    for(i=0; i<=y; i++){
        temp[i]=x[y-1-i];
    }
    temp[y]='\0';
//    printf("Your reversed string is: %s\n", temp);
    if (strcmp(x, temp)==0){
        return 1;
        // printf("Your string is a palindrome!\n");
    }
    else{
        return 0;
        // printf("Your string is not a palindrome!\n");
    }
    // printf("%s\n", string);
    // printf("%s", temp);
    strcpy(x, temp);
}

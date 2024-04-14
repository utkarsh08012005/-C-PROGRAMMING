#include<stdio.h>

int main(){
    //variable decleration
    int num;

    //input block
    printf("Enter a number:");
    scanf("%d",&num);

    //output block 
    if (num % 2 == 0) {
        printf("%d is an even number\n",num);
    } else {
        printf("%d is an odd number\n",num);
    }
    return 0;

}

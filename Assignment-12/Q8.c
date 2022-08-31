#include<stdio.h>
#include<conio.h>
void binaryToDecimal(int);
int main(){
    int n;
    printf("Printing bianry of decimal number\n");
    printf("Enter a number ");
    scanf("%d",&n);
    binaryToDecimal(n);
    return 0;
}

void binaryToDecimal(int a){
    if(a>=1){
        binaryToDecimal(a/2);
        printf("%d ",a%2);
    }
}
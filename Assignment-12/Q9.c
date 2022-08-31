#include<stdio.h>
#include<conio.h>
void decimalToOctal(int);
int main(){
    int n;
    printf("Printing Octal of decimal number\n");
    printf("Enter a number ");
    scanf("%d",&n);
    decimalToOctal(n);
    return 0;
}

void decimalToOctal(int n){
    if(n>=1){
        decimalToOctal(n/8);
        printf("%d ",n%8);
    }
}
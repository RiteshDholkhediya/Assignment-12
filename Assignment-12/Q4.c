#include<stdio.h>
#include<conio.h>
void printONR(int);
int main(){
    int a;
    printf("Print n odd natural numbers in reverse\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printONR(a);
    return 0;
}

void printONR(int n){
    if(n>=1){
        
        printf("%d ",2*n-1);
        printONR(n-1);
    }
}
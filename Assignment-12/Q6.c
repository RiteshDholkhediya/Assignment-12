#include<stdio.h>
#include<conio.h>
void printENR(int);
int main(){
    int a;
    printf("Print n even natural numbers in reverse\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printENR(a);
    return 0;
}

void printENR(int n){
    if(n>=1){
        
        printf("%d ",2*n);
        printENR(n-1);
    }
}
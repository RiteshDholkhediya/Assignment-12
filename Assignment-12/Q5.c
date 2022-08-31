#include<stdio.h>
#include<conio.h>
void printEN(int);
int main(){
    int a;
    printf("Print n even natural numbers\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printEN(a);
    return 0;
}

void printEN(int n){
    if(n>=1){
        
        printEN(n-1);
        printf("%d ",2*n);
    }
}
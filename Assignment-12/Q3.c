#include<stdio.h>
#include<conio.h>
void printON(int);
int main(){
    int a;
    printf("Print n odd natural numbers\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printON(a);
    return 0;
}

void printON(int n){
    if(n>=1){
        printON(n-1);
        printf("%d ",2*n-1);
    }
}
#include<stdio.h>
#include<conio.h>
void printSquare(int);
int main(){
    int a;
    printf("Print squares of first n natural numbers\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printSquare(a);
    return 0;
}

void printSquare(int n){
    if(n>=1){

        printSquare(n-1);
        printf("%d ",n*n);
    }
}
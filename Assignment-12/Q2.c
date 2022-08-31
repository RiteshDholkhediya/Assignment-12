#include<stdio.h>
#include<conio.h>
void printNR(int);
int main(){
    int a;
    printf("Print n natural numbers in reverse order\n");
    printf("Enter a number ");
    scanf("%d",&a);
    printNR(a);
    return 0;
}

void printNR(int n){
    if(n>=1){
        printf("%d ",n);
        printNR(n-1);
    }
}
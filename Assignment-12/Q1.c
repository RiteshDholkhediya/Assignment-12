#include<stdio.h>
#include<conio.h>
void printN(int);
int main(){
    int n;
    printf("Print n natural numbers\n");
    printf("Enter a number ");
    scanf("%d",&n);
    printN(n);
    return 0;
}

void printN(int a){
    if(a>1){
        printN(a-1);
    }
    printf("%d ",a);
}
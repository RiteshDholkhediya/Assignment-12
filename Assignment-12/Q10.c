#include<stdio.h>
#include<conio.h>
void reverse(int);
int main(){
    int n;
    printf("Print reverse of any number\n");
    printf("Enter a number ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}

void reverse(int n){
    if(n>=1){
        printf("%d ",n%10);
        reverse(n/10);
    }
}
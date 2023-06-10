#include<stdio.h>

int main(){
    int n,last,sum;
    printf("enter a number :");
    scanf("%d",  &n);
    last=n%10;

    while(n>9)
    {
        n=n/10;
    }
    sum=n+last;
    printf("sum of last and first digit= %d",sum);
    return 0;
}
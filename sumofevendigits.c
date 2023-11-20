#include<stdio.h>
void main(){
    int n,sum=0,ld;
    printf("enter a number-");
    scanf("%d",&n);
    while(n!=0)
    {
        ld=n%10;
        if(ld%2==0)
        {
            sum=sum+ld;
        }
        n=n/10;

    }
    printf("sum of even digits=%d",sum);
}
#include<stdio.h>
int main(){
    int n;
    printf("enter the limit-");
    scanf("%d",&n);
    //print the sum of sequence 1-2+3-4....
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else{
            sum=sum+1;
        }
    }
    printf("sum=%d",sum);
    return 0;
}
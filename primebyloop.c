#include<stdio.h>
int main(){
    int x,i,a=0;
    printf("enter a number-");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        {
            a=1;
            break;
        }}
        if(x==1) printf("1 is neither prime nor composite");
        else if(a==0) printf("it is prime");
        
        else printf("it is composite");
        

}
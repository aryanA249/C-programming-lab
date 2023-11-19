#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
       n=n/10;
        count++;
            
        
    }
    printf("%d",count);

}

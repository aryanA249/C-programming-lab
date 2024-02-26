#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,i,*p,n,m;
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr == NULL)
{
printf("memory is full");
}
printf("enter the %d elements-");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
printf("enter m value to resize the allocated space-");
scanf("%d",&m);
ptr=(int*)realloc(ptr,m*sizeof(int));
if(ptr==NULL)
{
printf("memory is full");
exit(0);
}
p=ptr;
printf("After reallocating");
printf("enter the %d elements");
for(i=0;i<m;i++)
{
scanf("%d",ptr+i);
}
printf("The elements after reallocating are");
for(i=0;i<m;i++)
{
printf("%d\n",*(p+i);
}
free(ptr);
free(p);
return 0;

}

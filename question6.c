#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
n=sumfact(n);
printf("sum=%d",n);
}
int sumfact(int x)
{
if(x>1)
return x*sumfact(x-1) ;
}

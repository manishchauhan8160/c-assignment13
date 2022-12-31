#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
n=sumsquare(n);
printf("sum=%d",n);
}
int sumsquare(int x)
{
if(x>1)
return x*x+sumsquare(x-1);
}

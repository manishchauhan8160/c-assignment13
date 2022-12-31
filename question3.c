#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
n=sumeven(n);
printf("sum=%d",n);
}
int sumeven(int x)
{
if(x>=1)
return sumeven(x-1)+2*x;
}

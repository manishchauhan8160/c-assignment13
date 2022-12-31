#include<stdio.h>
int main()
{
int n;
printf("enter the range");
scanf("%d",&n);
for(int i=1;i<=n;i++)
printf("%d\n",fib(i));
}
int fib(int x)
{
if(x==0||x==1)
return x;
return fib(x-1) + fib(x-2);
}

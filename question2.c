#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
n=sumodd(n);
printf("%d",n);
}
int sumodd(int x)
{
if(x>=1)
return sumodd(x-1)+(2*x-1);
}

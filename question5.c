#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
n=sumdigit(n);
printf("sum=%d",n);
}
int sumdigit(int x)
{
if(x)
return sumdigit(x/10)+x%10;
}

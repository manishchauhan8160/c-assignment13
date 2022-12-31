#include<stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
n=sum(n);
printf("sum is %d",n);
}
int sum(int x)
{
if(x==1){
return 1;
}
return x+sum(x-1);
}

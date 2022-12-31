#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
printf("no of digit are=%d",count(n));
}
int count(int n)
{
if(n)
 return count(n/10)+1;
}

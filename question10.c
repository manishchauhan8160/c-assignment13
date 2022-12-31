#include<stdio.h>
int main()
{
int x,y;
printf("enter the number and power");
scanf("%d%d",&x,&y);
printf("power=%d",power(x,y));
}
int power(int x,int y)
{
if(y==1)
return x;
return power(x,y-1)*x;
}

#include<stdio.h>
int main()
{
int x,y;
printf("enter two number");
scanf("%d%d",&x,&y);
x=hcf(x,y);
printf("hcf=%d",x);
}
int hcf(int x,int y)
{
if(x%y==0)
return y;
if(x>y)
hcf(x%y,y);
else
hcf(x,y%x);
}

#include<stdio.h>
int main()
{
int x,y,i;
scanf("%d%d",&x,&y);
for (i=1;i>0;i++)
{
if(i%x==0&&i%y==0)
break;
}
printf("%d is lcm of %d and %d",i,x,y);
return 0;
}

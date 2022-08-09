#include<stdio.h>
int main()
{
int n,i=1,sum=0,t;
scanf("%d",&n);
while(1)
{ t=i*i;
sum+=t;
if(i==n)
break;
i++;
}
printf("%d",sum);
return 0;
}

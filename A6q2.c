#include<stdio.h>
int main()
{
int n,sum=0,t=0,i=0;
printf("enter the number of even no.s sum to be calculated ");
scanf("%d",&n);
while(i>=0)
{
if(i%2==0)
    {
     sum+=i;
    t++;
    }
    if(t==n)
        break;
  i++;
}
printf("%d ",sum);
return 0;
}

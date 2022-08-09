#include<stdio.h>
int main()
{
int n,t=3;
scanf("%d",&n);
for(int i=2;i<n;i++)
{
if(n%i==0)
{
printf("not prime");
break;
}
if(t==n)
    printf("prime");
    t++;
}

if(n==2)
printf("prime");
return 0;
}

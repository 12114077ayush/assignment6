#include<stdio.h>
int main()
{ long int n,t=0;
scanf("%d",&n);
while(1)
{
n/=10;
t++;
if(n==0)
break;
}
printf("%d digit number",t);
return 0;
}

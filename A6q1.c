#include<stdio.h>
int main()
{ int n,sum=0;
 printf("enter the number of first n natural number sum to be calculated ");
 scanf("%d",&n);
 for (int i=1;i<=n;i++)
     sum+=i;
 printf("%d",sum);
 return 0;
}

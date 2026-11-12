#include<stdio.h>
int main ()
{
int n,i;
long fact=1;
printf("Enter number %d:",i);
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("Factorial of %d=%1d\n",n,fact);
return 0;
}

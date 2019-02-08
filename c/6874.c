#include<stdio.h>
int main()
{
int d,n,a,b,c;
scanf("%d",&n);
while(n>0)
{
d=n%100;
a=n%10;
b=n%10;
c=n%10;
printf("%d",d,a,b,c);
n=n/10;
}
return 0;
}

#include<stdio.h>
int main()
{
int a,b,c,d;

printf("enter four numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
{
printf("%d is smallest",a);
}
else if(b<c&&b<d)
{
printf("%d is smallest",b);
}
else if(c<d)
{
printf("%d is smallest",c);
}
else
{
printf("%d is smallest",d);
}
return 0;
}

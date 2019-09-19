#include<stdio.h>
void main()
{
int a,b,operation;
printf("enter values for a and b:");
scanf("%d %d",&a,&b);
printf("enter operation to be done:\n1.+\n2.-\n3.*\n4./");
scanf("%d",&operation);
switch(operation)
{
case 1:
printf("the sum of a and b is %d",a+b);
break;
case 2:
printf("the difference of a and b is %d",a-b);
break;
case 3:
printf("the product of a and b is %d",a*b);
break;
case 4:
printf("the division of a and b is %d",a/b);
break;
}
}

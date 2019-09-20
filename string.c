#include<stdio.h>
void main()
{
char num;
printf("enter a character:");
scanf("\n%c",&num);
if(num>='a'&&num<='z')
{
printf("%c is a string",num);
}
else
{
    printf("%c is a special character",num);
}
}  

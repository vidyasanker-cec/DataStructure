#include<stdio.h>
int main()
{
int a[10],i,n;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("even numbers are:\n");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("%d \t",a[i]);
}
}
printf("\n odd numbers are:\n");
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
printf("%d \t",a[i]);
}
}
return 0;
}

#include<stdio.h>
int main()
{
int a[10],i,n,sum=0;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the array is:\n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}

for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n sum=%d",sum);
return 0;
}

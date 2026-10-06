#include<stdio.h>
int main()
{
int mark;
printf("enter your mark:");
scanf("%d",&mark);
if(mark>=90)
{
printf("A+ grade");
}
else if(mark>=80)
{
printf("B+ grade");
}
else if(mark>=70)
{
printf("C+ grade");
}
 else if(mark>=50 && mark<=70)
{
printf("D grade");
}
else 
{
printf("you failed");
}
return 0;
}



//15. Write a c program to check whether a number is a strong number or not.
#include<stdio.h>

int main()
{
int num, i, rem, temp, sum=0, rslt;
scanf("%d", &num);

temp=num;
while(temp!=0)
{
    rem=temp%10;
    rslt=1;
    for(i=1; i<=rem; i++)
    {
        rslt=rslt*i;
    }
  sum = sum+rslt;
  temp=temp/10;
}
if(num==sum)
  {
    printf("Is strong number %d\n", sum);
  }
  else
    printf("Is not strong number %d", sum);
return 0;
}

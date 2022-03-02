#include<stdbool.h>
int main ()
{
  int userNumber;
  printf ("Enter number\n");
  scanf("%d",& userNumber);
  int num;
  int sum=0;
  for (num=1;num<=userNumber;num++)
    {
       sum+=num;

    }
printf("The sum to %d is =%d",userNumber,sum);
  return 0;
}

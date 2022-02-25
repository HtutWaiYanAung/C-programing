#include <stdio.h>
int main()
{
    int startNumber=1;
    while (startNumber<=10)
    {
         int remaindingNumber=startNumber%2;
         if (remaindingNumber==0)
         {
             printf("%d\n",startNumber);
         }
         startNumber++;
    }
}

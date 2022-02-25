#include <stdio.h>
int main()
{
    printf("This program is to display 1 to the number user typed.\n");
    int userNumber;
    int ourNumber=1;
    printf("Enter the number.\n");
    scanf("%d",& userNumber);
    while (ourNumber<=userNumber)
    {
        printf("%d\n",ourNumber);
        ourNumber++;
    }


}

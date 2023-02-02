#include <stdio.h>
int main() 
{
    int num, Num1, rem, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    Num1 = num;
    while (Num1 != 0) 
	{
        rem = Num1 % 10;
       result = result + rem * rem * rem;
       Num1 = Num1/10;
    }
    if (result == num)
        printf("%d is an armstrong number.", num);
    else
        printf("%d is not an armstrong number.", num);

    return 0;
}


#include <stdio.h>

int main(void)
{
    int num_pass;
    float gas, shared_amount;

    printf("Enter the number of passenger, a space and then the amount of gas: ");
    scanf("%d %f", &num_pass, &gas);
    if (num_pass < 0)
    {
        printf("\nInvalid number of passenger entered.\n");
    } else if (num_pass == 0)
    {
        printf("%.2f\n", gas);
    } else
    {
        gas++;
        shared_amount = gas / (num_pass + 1);
        printf("%.2f\n", shared_amount);
    }
    return (0);
}
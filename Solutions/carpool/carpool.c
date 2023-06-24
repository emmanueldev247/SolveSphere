#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that calculates the cost of a carpool ride
 * Return: 0
 */
int main(void)
{
    int num_pass;
    float gas, shared_amount;

    printf("Enter the number of passenger, a space and then the amount of gas: ");
    scanf("%d %f", &num_pass, &gas); /** Take input for number of passengers and cost of gas**/
    
	if (num_pass < 0)
    {
        printf("\nInvalid number of passenger entered.\n"); 
    } else if (num_pass == 0)
    {
        printf("%.2f\n", gas);
    } else
    {
        gas++; /** Fee added **/
        shared_amount = gas / (num_pass + 1); /** The extra 1 is provisioned for the one who ordered the pool (driver) **/
        printf("%.2f\n", shared_amount);
    }
    return (0);
}

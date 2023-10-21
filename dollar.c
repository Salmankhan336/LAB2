#include <stdio.h>
int main()
{
    double usdollars, gbp, jpy, exchangefee;
    //inputs the amounts in usdollars
    printf("enter the amount in us dollars");
    scanf("%if", &usdollars);
    
    //calculate the exchange fee which is 10% of the total amount
    exchangefee = 0.10 * usdollars;

    //calculate te amount after deducting the exchange fee
    double remainingdollars = usdollars - exchangefee;


}

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

    //calculate the amount in gbp and jpy
    gbp = remainingDollars * 0.79 / 2.0;
    jpy = remainingDollars * 127.65 / 2.0;

    //results
    printf("amount in usdollars: $&.2if\n", usdollars);
    printf("exchage fee: $&.2if\n", exchangefee);
    printf("amount in gbp: £&.2if\n", gbp );
    printf("amount in jpy: %d jpy\n", (int)jpy);

    return 0;



}

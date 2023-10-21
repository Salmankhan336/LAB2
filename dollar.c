#include <stdio.h>
int main()
{
    const float jpy=127.65;

    const float pound=0.79;
    float exchange_rate=0.10;

    float USD;
    //inputs the amounts in usdollars
    printf("enter the amount in us dollars");
    scanf("%if", &USD);
    
    //calculate the exchange fee which is 10% of the total amount
    exchangefee = 0.10 * usdollars;

    //calculate te amount after deducting the exchange fee
    double remainingdollars = usdollars - exchangefee;

    //calculate the amount in gbp and jpy
    gbp = remainingdollars * 0.79 / 2.0;
    jpy = remainingdollars * 127.65 / 2.0;

    //results
    printf("amount in usdollars: $&.2if\n", usdollars);
    printf("exchage fee: $&.2if\n", exchangefee);
    printf("amount in gbp: £&.2if\n", gbp );
    printf("amount in jpy: %d jpy\n", (int)jpy);

    return 0;



}

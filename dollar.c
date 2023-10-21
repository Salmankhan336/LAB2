#include <stdio.h>
int main()
{
    const float jpy=127.65;

    const float pound=0.79;
    float exchange_rate=0.10;

    float USD;

    float JPY_convert, Pound_convert,remaning_USD;
    //inputs the amounts in usdollars
    printf("enter the amount in us dollars");
    scanf("%if", &USD);
    
    //calculate the exchange fee which is 10% of the total amount
    exchange_rate=USD * exchange_rate;

    remaning_USD=USD - exchange_rate;

   JPY_convert=(remaning_USD * 0.5 * jpy);

   Pound_convert=(remaning_USD * 0.5 pound);

    //calculate te amount after deducting the exchange fee
    

    //calculate the amount in gbp and jpy
   

    //results
    printf("amount in usdollars: $&.2if\n", USD);
    printf("exchage fee: $&.2if\n", exchange_rate);
    printf("amount in gbp: £&.2if\n",Pound_convert );
    printf("amount in jpy: %d jpy\n", JPY_convert);

    return 0;



}

// C code to illustrate External-Linkage
#include <stdio.h>
extern int nBalanceAmount; // Now compiler knows that the variable is
                           // defined else where.
                           // Compiler just need to know the type.
void GooglePay( const int nAmountToPay )
{
    nBalanceAmount = nBalanceAmount - nAmountToPay;

    printf("----------------Google Pay Reciept---------------------\n");
    printf("Paid Amount : %d\n", nAmountToPay);
    printf("Balance Amount : %d\n", nBalanceAmount);
    printf("-------------------------------------\n");
}
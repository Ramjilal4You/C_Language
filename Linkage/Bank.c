//// C code to illustrate Internal-Linkage
#include <stdio.h>

static int nBalanceAmount = 5000; // static linkage


static void BalanceAmount()
{
    printf("Bank Balance Amount: %d\n", nBalanceAmount);
}

void PaySalaryToBankEmployee( int nSalary )
{
    printf("-------------------------------------\n");
    BalanceAmount();

    nBalanceAmount = nBalanceAmount - nSalary;
    printf("Amount deducted from Bank account: %d\n", nSalary);
    
    BalanceAmount();
    printf("-------------------------------------\n");
}
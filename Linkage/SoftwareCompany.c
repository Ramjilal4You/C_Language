//// C code to illustrate Internal-Linkage
#include <stdio.h>

static int nBalanceAmount = 3000;  // static linkage

static void BalanceAmount()
{
   printf("Software company Balance Amount: %d\n", nBalanceAmount);
}

void PaySalaryToSoftwareEngineer( int nSalary )
{
    printf("-------------------------------------\n");
    BalanceAmount();

    nBalanceAmount = nBalanceAmount - nSalary;
    printf("Amount deducted from Software company account: %d\n", nSalary);

    BalanceAmount();

    printf("-------------------------------------\n");
}
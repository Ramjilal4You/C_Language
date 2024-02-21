// C code to illustrate No-Linkage
#include <stdio.h>

void FDBalance()
{
   int Amount = 50000; // No linkage
   printf("Fixed Deposit Balance %d\n", Amount );
}

void CarLoan()
{
    int Amount = 25000; // No linkage
    printf("Car Loan %d\n", Amount);
}

//int main()
//{
//	  printf("------------No Linkage : NoLinkage::main()-------------\n\n");
//    FDBalance();
//    CarLoan();
//    return 0;
//}
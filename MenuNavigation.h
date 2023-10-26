#include <iostream>
#ifndef print
// #include "common.h"
#endif

using namespace std;

int welcomeScreen()
{
    int input = 0;
    //system("cls");
    println("--------------------------------------------------------------------------------");
    println("----------------------------------- ABC Bank -----------------------------------");
    println("--------------------------------------------------------------------------------");
    println("--------------------------------- ADMIN PANEL ----------------------------------");
    println("--------------------------------------------------------------------------------");
    println("|      1. Create Customer Account                                              |");
    println("|      2. Show Customer Account Balance                                        |");
    println("|      3. Modify Customer Account                                              |");
    println("|      4. View Customer Accounts                                               |");
    println("|      5. Staff Account management                                             |");
    println("|      6. Deposit Amount                                                       |");
    println("|      7. Withdraw Amount                                                      |");
    println("|      8. Staff Payroll Generation                                             |");
    println("|                                                                              |");
    println("|     98. Logout                                                               |");
    println("|     99. Exit                                                                 |");
    println("--------------------------------------------------------------------------------");
    print("Choose Option : ");
    cin >> input;
    return input;
}

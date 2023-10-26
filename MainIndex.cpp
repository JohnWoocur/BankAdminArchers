#include <iostream>
#include "common.h"
#include "login.h"
#include "MenuNavigation.h"
#include "replace.h"
#include "custemer_report.h"
// this is temporary
//  include your module files here

// Next Header files declaration
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include "withdraw.h"
#include "deposit.h"
#include "full.h"
#include "streport.h"
#include "cadd.h"
#include "showCustomer.h"
#include "stadd.h"

using namespace std;

// function decalration

int main()
{
    // statements
    int input = 98;

    input = login();

    while (input != 99)
    {

        switch (input)
        {
        case 100:
            input = welcomeScreen();
            break;
        case 99:
            return 0;
            break;
        case 98:
            input = login();
            break;
        case 1:
            input = Create_Account(); // Call your functions here those functions shoud return value at the end of function
            break;
        case 2:
            input = showCustomer(); // Call your functions here those functions shoud return value at the end of function
            break;
        case 3:
            input = test(); // Call your functions here those functions shoud return value at the end of function
            break;
        case 4:
            input = cReport(); // Call your functions here those functions shoud return value at the end of function
            break;
        case 5:
            staffmenu(); // Call your functions here those functions shoud return value at the end of function
            // input = staffmenu();     //Call your functions here those functions shoud return value at the end of function
            break;
        case 6:
            input = deposit(); // Call your functions here those functions shoud return value at the end of function
            break;
        case 7:
            input = withdrawal(); // Call your functions here those functions shoud return value at the end of function
            break;
        case 8:
            input = payroll(); // Call your functions here those functions shoud return value at the end of function
            break;
        default:
            break;
        }
    }
    return 0;
}

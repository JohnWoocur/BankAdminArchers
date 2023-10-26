#include <iostream>
#include <fstream>

using namespace std;

int payroll()
{

  float basicSalary, grossSalary, netSalary;
  float LA, MA, TA, FA;
  float SA, NP;
  float noD, Rate;
  string Sid, month;
  int ans;

  do
  {
    system("cls");

    fstream payFile("payroll.txt", ios::app);
    cout << "\n                   -------------------------------- ";
    cout << "\n                   **** Staff's Payroll System **** ";
    cout << "\n                   -------------------------------- ";
    cout << "\n";

    cout << "Enter the Staff ID :";
    cin >> Sid;
    payFile << Sid;
    cout << "Enter the Month    :";
    cin >> month;
    payFile << " " << month;
    cout << "\n";

    cout << "Total working days :";
    cin >> noD;
    payFile << " " << noD;
    cout << "Rate per Day       :";
    cin >> Rate;
    payFile << " " << Rate;

    cout << "\n          Allowances     ";
    cout << "\n------------------------------- ";
    cout << "\n";
    cout << "\nEnter the Living Allowance    (+) : ";
    cin >> LA;
    payFile << " " << LA;
    cout << "\nEnter the Medical Allowance   (+) : ";
    cin >> MA;
    payFile << " " << MA;
    cout << "\nEnter the Transport Allowance (+) : ";
    cin >> TA;
    payFile << " " << TA;
    cout << "\nEnter the Food Allowance      (+) : ";
    cin >> FA;
    payFile << " " << FA;

    cout << "\n          Dedations     ";
    cout << "\n------------------------------- ";
    cout << "\n";
    cout << "\nEnter the Salary Advance      (-) : ";
    cin >> SA;
    payFile << " " << SA;
    cout << "\nEnter the NoPay Amount        (-) : ";
    cin >> NP;
    payFile << " " << NP;

    basicSalary = noD * Rate;
    grossSalary = basicSalary + LA + MA + TA + FA;
    netSalary = grossSalary - (SA + NP);

    cout << "\nThe Basic Salary is - Rs. " << basicSalary;
    cout << "\n";
    payFile << " " << basicSalary;
    cout << "\nThe Gross Salary is - Rs. " << grossSalary;
    cout << "\n";
    payFile << " " << grossSalary;
    cout << "\nThe net Salary is   - Rs. " << netSalary;
    cout << "\n";
    payFile << " " << netSalary << endl;
    payFile.close();

    cout << "\n";
    cout << "\n 1. Another calculation : ";
    cout << "\n 2. Back to main menu : ";
    cout << "\n 3. Log out : ";
    cout << "\n 4. exit : ";
    cout << "\n";
    cout << "\n Choose Option :";

    cin >> ans;

  } while (ans == 1);
  switch (ans)
  {
  case 2:
    return 0;
    break;

  case 3:
    return 0;
    break;

  case 4:
    return 0;
    break;

  default:
    return 100;
  }
}

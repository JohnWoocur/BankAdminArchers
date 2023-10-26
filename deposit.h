#include <iostream>
#include <fstream>
using namespace std;
void topbar()
{
  system("cls");
  cout << "************************************************************************************************************************\n";
  cout << "***********************************************************************************************************";
  cout << "******************************************************************** DEPOSIT ********************************************************\n";
  cout << "-----------------------------------------------------------------------------------------------------------------------";
  cout << "\n\n\n";
}

float deposit()
{

  bool isCompleted = false;
  int opt = 0;
  int account = 0, initial, phone, dob, input;
  string name, type, address, email, nic;

  int fileaccount, fileinitial, filephone, filedob;
  string filename, filetype, fileaddress, fileemail, filenic;

  topbar();

  fstream file("customer.txt");

start:
  cout << "\t\t\t\t\t\tEnter your Account no: ";
  cin >> input;

  while (file >> account, name, type, initial, address, phone, email, nic, dob)
  {
    if (input == account)
    {
      account = fileaccount;
      initial = fileinitial;
      phone = filephone;
      dob = filedob;
      name = filename;
      type = filetype;
      address = fileaddress;
      email = fileemail;
      nic = filenic;
    }
  }
  if (account != 0)
  {
    cout << "\t\t\t\t\t Invalid Account No..kindly Re-Check your Account No \n\n";
    goto start;
  }

  do
  {
    double amount, curAmount;

    topbar();

    cout << "Name : " << name << endl;
    cout << "Account No : " << account << endl;
    cout << "Ac Type : " << type << endl;
    cout << "Current Balance : " << initial << endl;

    cout << "\n";
    cout << "\t\t\t\t\t\tEnter the amount u're going to Deposit: ";
    cin >> amount;

    curAmount = amount + initial;

    cout << "\n";
    cout << "\t\t\t\t\t\tyour current balance is: " << curAmount;
    cout << "\n";

    cout << "\n\t\t\t\t\t Do you want to Deposit again? \n";
    cout << "\t\t\t\t\t 1. Yes \n";
    cout << "\t\t\t\t\t 2. No \n";
    cin >> opt;

    if (opt == 1)
    {
      isCompleted = true;
    }
    else if (opt == 2)
    {
      isCompleted = false;
    }

  } while (isCompleted);

  return 0;
}

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

int deposit()
{

  bool isCompleted = false;
  int opt = 0;
  int cID,amount;
    string name;
    int dep;
    topbar();
    cout << "Enter your customer id : ";
    cin >> cID;

  do
  {
    string file = "Customers/"+to_string(cID)+".txt";
    ifstream myFileR(file);
        if(myFileR.is_open()){
            while (myFileR>>cID>>name>>amount)
            {
                cout <<"Customer Id : "<<cID<<endl;
                cout <<"name        : "<<name<<endl;
                cout <<"Balance     : "<<amount<<endl;
                cout<<endl;
                cout <<"Enter Amount for deposit : ";
                cin >> dep;
                //int bald = stoi(amount);
                int bal = amount+dep;
                ofstream myFileRR(file);
                if(myFileRR.is_open()){
                  myFileRR << cID <<" " <<name << " " <<bal;
                  myFileRR.close();
                  cout <<"Balance Updated ..."<<endl;
                  cout <<"Updated Details"<<endl;
                  cout <<"\tCustomer Id : "<<cID<<endl;
                  cout <<"\tname        : "<<name<<endl;
                  cout <<"\tBalance     : "<<bal<<endl;
                }

            }myFileR.close();

        }
        else{
          cout <<"Customer not found .."<<endl;
        }

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
      return 100;
    }

  } while (isCompleted);

  return 0;
}

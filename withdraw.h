#include <iostream>
#include <fstream>
using namespace std;
void topbarr()
{
  system("cls");
  cout << "************************************************************************************************************************\n";
  cout << "***********************************************************************************************************";
  cout << "******************************************************************** WITHDRAW ********************************************************\n";
  cout << "-----------------------------------------------------------------------------------------------------------------------";
  cout << "\n\n\n";
}

int withdraw()
{

  bool isCompleted = false;
  int opt = 0;
  int cID,amount;
    string name;
    int dep;
    topbarr();
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
                cout <<"Enter Amount for withdraw : ";
                cin >> dep;
                //int bald = stoi(amount);
                if(dep<amount){
                int bal = amount-dep;
                ofstream myFileRR(file);
                if(myFileRR.is_open()){
                  myFileRR << cID <<" " <<name << " " <<bal;
                  myFileRR.close();
                  cout <<"Balance Updated ..."<<endl;
                  cout <<"Updated Details"<<endl;
                  cout <<"\tCustomer Id : "<<cID<<endl;
                  cout <<"\tname        : "<<name<<endl;
                  cout <<"\tBalance     : "<<bal<<endl;
                }}
                else{
                    cout<<"\tbalance not available"<<endl;
                }

            }myFileR.close();

        }
        else{
          cout <<"Customer not found .."<<endl;
        }

    cout << "\n\t\t\t\t\t Do you want to withdraw again? \n";
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

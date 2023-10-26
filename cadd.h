#include <iostream>
#include <fstream>
using namespace std;

float Create_Account()
{
    int account;
    string name;
    string type;
    int initial;
    string address;
    int phone;
    string email;
    string nic;
    int dob;
    int ans;
    do
    {
        fstream CusFile("customer.txt", ios::app);
        cout << "\n Enter the account number: ";
        cin >> account;
        CusFile << account << " ";
        cout << "\n Enter the account holder name: ";
        cin >> name;
        CusFile << name << " ";
        cout << "\n Enter the account type: ";
        cin >> type;
        CusFile << type << " ";
        cout << "\n Enter your address: ";
        cin >> address;
        CusFile << address << " ";
        cout << "\n Enter your phone number: ";
        cin >> phone;
        CusFile << phone << " ";
        cout << "\n Enter your email address: ";
        cin >> email;
        CusFile << email << " ";
        cout << "\n Enter your nic number: ";
        cin >> nic;
        CusFile << nic << " ";
        cout << "\n Enter your DOB: ";
        cin >> dob;
        CusFile << dob << " ";
        cout << "\n Enter your initial amount: ";
        cin >> initial;
        CusFile << initial << " " << endl;
        CusFile.close();

        cout << "\n Account Created....***";

        cout << " Choose Option" << endl;
        cout << " 1 Create another account" << endl;
        cout << " 2 Back to main menu" << endl;
        cout << " 3 Logout" << endl;
        cout << " 4 Exit" << endl;

        cin >> ans;

    }

    while (ans == 1);
    switch (ans)

    {

    case 2:
        return 100;
        break;

    case 3:
        return 98;
        break;

    case 4:
        return 99;
        break;

    default:
        return 100;
    }
}

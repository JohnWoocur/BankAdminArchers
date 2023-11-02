#include <iostream>
#include <fstream>
using namespace std;
#include <direct.h>
#include <vector>

int Create_Account()
{
    vector<int> customerArray;
    int ans;
    do
    {
        int cID;
        string name;
        int amount;
        string fname= "Customers";
        int f= mkdir(fname.c_str());

        cout << "\n Enter the customer id : ";
        cin >> cID;
        cout << "\n Enter the customer name : ";
        cin >> name;
        cout << "\n Enter the amount : ";
        cin >> amount;

        string file =fname+"/"+ to_string(cID)+".txt";
        ofstream myFile(file);
        if(myFile.is_open()){
            myFile << cID<<" "<<name<<" "<<amount;
            ofstream myFileA("Customers.txt",ios::app);
            if(myFileA.is_open()){
            myFileA << cID <<" "<<  endl;
            myFileA.close();
    }

            cout << "\n Account Created....***";
            myFile.close();
        }
        else{
            cout <<"not";
        }





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

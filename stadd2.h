#include <iostream>
#include <fstream>
using namespace std;
#include <direct.h>
#include <vector>

int staffmenu()
{
    vector<int> customerArray;
    int ans;
    cout << "\t\t\t................................" << endl;
    cout << "\t\t\t.....STAFF MANAGMENT SYSTEM ....." << endl;
    cout << "\t\t\t................................" << endl;
    do
    {

        string staff_id, name , address , contact_no ,email;
        string fname= "Staff";
        int f= mkdir(fname.c_str());
        
        cout << "\n Enter the Staff id : ";
        cin >> staff_id;
        cout << "\n Enter the Staff name : ";
        cin >> name;
        cout << "\n Enter the Staff address : ";
        cin >> address;
        cout << "\n Enter the Staff contact number : ";
        cin >> contact_no;
        cout << "\n Enter the email : ";
        cin >> email;

        string file =fname+"/"+ staff_id+".txt";
        ofstream myFile(file);
        if(myFile.is_open()){
            myFile << staff_id<<" "<<name<<" "<<address<<" "<<contact_no<<" "<<email;
            ofstream myFileA("Staff.txt",ios::app);
            if(myFileA.is_open()){
            myFileA << staff_id <<" "<<  endl;
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

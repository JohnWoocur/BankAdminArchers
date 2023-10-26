using namespace std;
#include<iostream>
#include<fstream>




void staffmenu();
void insert();

void staffmenu()
{
menustart:
    int choice;
    char a;
    system("cls");

    cout << "\t\t\t................................" << endl;
    cout << "\t\t\t.....BANK MANAGMENT SYSTEM ....." << endl;
    cout << "\t\t\t................................" << endl;
    cout << "\t\t\t 1.Add new staff " << endl;
    cout << "\t\t\t 2.Display record" << endl;
    cout << "\t\t\t 3.Search record  " << endl;
    cout << "\t\t\t 4.Exit" << endl;

    cout << "\t\t\t................................" << endl;
    cout << "\t\t\t Choose your option : (1/2/3/4)" << endl;
    cout << "\t\t\t................................" << endl;
    cout << "Enter ur choose:" << endl;
    cin >> choice;

    switch (choice)

    {
    case 1:

        do
        {
            insert();

            cout << "\n\t\t\t do u add the another record ( y/n)";
            cin >> a;
        } while (a == 'y' || a == 'y');

        break;

    case 4:
        exit(0);
        break;

    default:
         cout << "invalid";
    }
    goto menustart;
}

void insert()
{
    system("cls");
    fstream file;
    string staff_id, name , address , contact_no ,email;
    cout << "\n-----------------------------------add staff-----------------------------------"<<"\n";
    cout << "\n\t\t\t Staff ID : "; 	
    cin >> staff_id;

    cout << "\n\t\t\tName : ";
    cin >> name;

    cout << "\n\t\t\t Adress : ";
    cin >> address;

    cout << "\n\t\t\tContact_No : ";
    cin >> contact_no;

    cout << "\n\t\t\tE_mail : ";
    cin >> email;

    file.open("staff_record.txt" ,ios::app | ios::out);
    file<<""<<"\t" <<staff_id <<"\t"<<name <<"\t"<<address << "\t"<<contact_no <<"\t"<< email <<"" <<"\n";
    file.close();
}

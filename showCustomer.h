#include <iostream>
 #include <fstream>
 #include <string>
 #include <cstdlib>
 using namespace std;


int showCustomer()

{
   int opt ,account ,phoneno;
   float balance;
   string name ,address ,type ,email ,nic ,dob;

    do{
    bool isfound=false;
    int accno;
    system("cls");
    cout<<"\t\t============= | Customer Details | ============="<<endl;
    cout<<"\n\tEnter your account number : ";
    cin>>accno;

    fstream accReadFile;
    string txtOut;

    accReadFile.open("customer.txt");
    while(accReadFile>>account>>name>>type>>address>>phoneno>>email>>nic>>dob>>balance)
    {
       if(accno==account)
        {
            isfound=true;
            cout<<"\n\n\t\tAccount number :"<<account <<endl;
            cout<<"\t\tName :"<<name<<endl;
            cout<<"\t\tType :"<<type <<endl;
            cout<<"\t\tAddress :"<<address <<endl;
            cout<<"\t\tPhone number :"<<phoneno <<endl;
            cout<<"\t\tEmail :"<<email <<endl;
            cout<<"\t\tNIC :"<<nic <<endl;
            cout<<"\t\tDoB :"<<dob <<endl;
            cout<<"\t\tBalance :"<<balance<<endl;
        }

    }
     accReadFile.close();

       if(!isfound)
     {
        cout<<"Account is not found"<<endl;
     }


    cout<<"\n\n\t\t\t\t1.View another account number\n";
    cout<<"\t\t\t\t2.Back to main menu\n";
    cout<<"\t\t\t\t98.Logout\n";
    cout<<"\t\t\t\t99.Exit\n";


    cout<<"\n\n\t\t\tEnter your option : \n\t\t\t\t";
    cin>>opt;
    }while(opt==1);


    switch (opt)
    {
    case 2:
        return 100;
        break;

    case 98:
        return 98;
        break;

    case 99:
        return 99;
        break;

    default:
        cout <<"\t\t\t Invalid option."<<endl;
        break;
    }


    cout<<"\t\t============= | Thank You | =============";


}

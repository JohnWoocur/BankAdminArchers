#include <iostream>
 #include <fstream>
 #include <string>
 using namespace std;


int showCustomer()

{
   int opt;
   string id,name,amount;

    do{
    int cus;
    system("cls");
    cout<<"\t\t============= | Customer Details | ============="<<endl;
    cout<<"\n\tEnter your customer id : ";
    cin>>cus;

    string file = "Customers/"+to_string(cus)+".txt";
    ifstream myFileR(file);
        if(myFileR.is_open()){

            while (myFileR>>id>>name>>amount)
            {
                cout <<"Customer Id : "<<id<<endl;
                cout <<"name        : "<<name<<endl;
                cout <<"Balance     : "<<amount<<endl;
                cout<<endl;

            }myFileR.close();

            }


        else{
          cout <<"Customer not found .."<<endl;
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
    return 0;


}

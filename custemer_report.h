#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int cReport()
{
    fstream CusFile;
    string txtOut;
    int input;

    CusFile.open("customer.txt");
    system("cls");
    cout<<"account_no account name type address phone email nic dob balance"<<endl;
    while(getline(CusFile,txtOut))
    {
        cout <<txtOut<<endl;
    }
    cout<<"choose option"<<endl;
    cout<<"1 back to main"<<endl;
    cout<<"98 logout"<<endl;
    cout<<"99 exit"<<endl;
    cin>>input;
    switch(input){
case 1:
    return 100;
    break;

    case 98:
    return 98;
    break;

    case 99:
    return 99;
    break;

    default:
    return 100;
    break;
    }


}

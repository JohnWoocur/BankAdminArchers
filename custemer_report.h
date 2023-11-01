#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int cReport()
{
    int input;

    cout <<"\t|--------|All Customers|--------|"<<endl;
    fstream file("Customers.txt");
    vector<int> user;
    if(file.is_open()){
        int id;
        while(file>>id){
            user.push_back(id);
        }
        file.close();
    }
    for(int i=0; i<user.size(); i++){
        string cid,name,amount;
        int ii = user[i];
        ifstream file("Customers/"+to_string(ii)+".txt");
        if(file.is_open()){
            file >>cid>>name>>amount;
            cout << "Customer id   : "<<cid << endl;
            cout << "Customer name : "<<name << endl;
            cout << "Balance       : "<<amount << endl;
        }
        if(i % 3 == 1){
            cout <<endl;
        }
    }

    cout<<endl;
    cout<<"| choose option |"<<endl;
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

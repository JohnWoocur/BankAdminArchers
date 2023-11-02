#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int sreport()
{
    int input;

    cout <<"\t|--------|All Staff|--------|"<<endl;
    fstream file("Staff.txt");
    vector<int> staff;
    if(file.is_open()){
        int id;
        while(file>>id){
            staff.push_back(id);
        }
        file.close();
    }
    for(int i=0; i<staff.size(); i++){
        string sid,name,address,cnumber,email;
        int ii = staff[i];
        ifstream file("Staff/"+to_string(ii)+".txt");
        if(file.is_open()){
            file >>sid>>name>>address>>cnumber>>email;
            cout << "Staff id       : "<<sid << endl;
            cout << "Staff name     : "<<name << endl;
            cout << "Staff address  : "<<address << endl;
            cout << "Contact Number : "<<cnumber << endl;
            cout << "Email          : "<<email << endl;
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

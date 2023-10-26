#include <iostream>


using namespace std;

int  withdrawal(){

bool isCompleted=false;
 int input=0;
do{
        float curVal , wdVal;


     cout<<"\t\t\t\t******************** WITHDRAWAL ********************";
     cout<<"\n \t\t\t\t\tEnter the Withdrawal Ammount:";
     cin>>wdVal;

     curVal=1000;

     if(curVal>=wdVal){
        cout<<"\n \t\t\t\t\tPlease get the ammount";
        curVal-=wdVal;

        cout<<"\n\n \t\t\t\t\t The Current Ammount is:"<<curVal;
        cout<<"\n\n \t\t\t\t\t The Withdrawal Ammount is:"<<wdVal;

     }
    else {
        cout<<"Insufficient Value that you have entered";
        cout<<"\n\n \t\t\t\t\t The Current Ammount is:"<<curVal;
    }

    cout<<"Do you want another transection"<<endl;
    cout<<"1.yes"<<endl;
    cout<<"2.No Go to Main Menu"<<endl;
    cin>>input;

    if(input==1){
        isCompleted = true;
    }
    else if(input==2){
        isCompleted =false;
    }





}while(isCompleted);
        return 100;
    }




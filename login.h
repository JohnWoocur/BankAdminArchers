#include <iostream>
using namespace std;

int login()
{
    string username, password;
    int count = 0;
    bool invalid = false;
    do
    {

        //system("cls");
        println("--------------------------------------------------------------------------------");
        println("----------------------------------- ABC Bank -----------------------------------");
        println("--------------------------------------------------------------------------------");
        println("---------------------------------- LOGIN PAGE ----------------------------------");
        println("--------------------------------------------------------------------------------");
        println("|                                                                              |");
        println("|                                                                              |");
        println("--------------------------------------------------------------------------------");
        if(invalid){
            cout << "Invalid Credintials !!! (" << 3 - count << " attempts more)\n\n" << endl;
        }
        print("Enter Username : ");
        cin >> username;
        print("Enter Password : ");
        cin >> password;

        if (username == "admin" && password == "admin")
        {
            return 100;
        }
        else
        {
            invalid = true;
            count++;
        }
    } while (invalid && count <= 2);
    println("\nMaximum Login Attempt");
    return 99;
}

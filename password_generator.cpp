#include <iostream>
#include <cstdlib>
#include <string>
#include <climits>

using namespace std;

int main(){

    


    cout << endl;
    
    cout << "###################################################\n";
	cout << "# Code for      : Password Generator              #\n";
    cout << "# Code language : C++                             #\n";
    cout << "# Author        : Md. Tareq Ahamed Jony           #\n";
    cout << "# Member of     : Knight Squad                    #\n";
    cout << "# Position      : Learner (Knight_VIII)           #\n";
    cout << "###################################################\n\n";
while (1)
    {
        char pass [] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789~!#$%^&*()_+|}{:<>?:;";
    
        int lenth;
        cout << "Enter lenth of your password : ";
        try{
         if (!(cin>> lenth)){
                throw -1;
            }
            cout <<endl;
        }
        catch (...) {
            cout <<endl;
            cout<<"Invalid input\n";
            cin.clear();
            cin.ignore(INT_MAX, '\n');;
        }

        for (int j = 0; j < lenth; j++)
        {
            int password = rand() % (sizeof(pass) - 1);
            cout << pass[password];
        }
            cout <<endl<<endl;
    }
    return 0;
}
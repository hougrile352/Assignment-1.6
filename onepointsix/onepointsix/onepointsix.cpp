// 1.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string name;
string verb;
string location;
string message = "1 2 while at 3";
string str1 = "1";
string str2 = "2";
string str3 = "3";

void doTheThing()
{
    message.substr(0, message.find(str1));
    cout << name + " ";

    message.substr(0, message.find(str2));
    cout << verb;
    cout << " while at ";

    message.substr(0, message.find(str3));
    cout << location;
}

int main()
{
    cout << "Enter your name:\n";
    cin >> name;

    cout << "Enter your verb:\n";
    cin >> verb;

    cout << "Enter your location:\n";
    cin >> location;

    doTheThing();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

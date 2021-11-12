#include <iostream>

#include "User.h"

// using directives
using std::cout;
using std::cin;
using std::endl;
using std::string;

User createUser();

int main()
{
    User user = createUser();
    char userInput;
    cout << "Welcome to the Political Test " << user.getUsername();
    cout << "Start the test (Y/N) ";
    cin >> userInput;
    cout << endl;
    if (userInput != 'Y')
    {
        cout << "Exiting program...";
        exit(0);
    }

    return 0;
}

User createUser() 
{
    string firstname;
    string lastname;
    cout << "Enter firstname: ";
    cin >> firstname;
    cout << "Enter lastname: ";
    cin >> lastname;

    User user = User(firstname, lastname);

    cout << "User created! \n\n";

    return user;
}

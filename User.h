#ifndef USER_H
#define USER_H

#include <iostream>

// using directives
using std::string;

class User
{
public: // constructors
	User(string firstname, string lastname);
	~User();
private:
	string _firstname;
	string _lastname;
public: // methods
	string getUsername();
	void setUsername(string firstname);

	string getLastname();
	void setLastname(string lastname);
};

#endif // !USER_H



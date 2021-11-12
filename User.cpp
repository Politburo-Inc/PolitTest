#include <iostream>

#include "User.h"

// using directives
using std::string;

User::User(string firstname, string lastname)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
}

string User::getUsername()
{
	return this->_firstname;
}

void User::setUsername(string firstname)
{
	this->_firstname = firstname;
}

string User::getLastname()
{
	return _lastname;
}

void User::setLastname(string lastname)
{
	this->_lastname = lastname;
}

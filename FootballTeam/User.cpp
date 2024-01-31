#include "User.h"

User::User(string name, string password)
{
    setName(name);
    setPassword(password);
}

void User::setName(string name)
{
    this->name = name;
}

string User::getName()
{
    return this->name;
}

void User::setPassword(string password)
{
    if (password.length() > 4 && password.length() < 20) {
        this->password = password;
    }
    else {
        while (!(password.length() > 4 && password.length() < 20)) {
            cout << "incorect" << endl;
            cin >> password;
        }

        this->password = password;
        
    }
}

string User::getPassword()
{
    return this->password;
}

void User::printUser()
{
    cout << "User name is: " << name << endl << "User password is " << password << endl;
}

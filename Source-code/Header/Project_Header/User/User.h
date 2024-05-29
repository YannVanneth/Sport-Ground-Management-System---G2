#ifndef __USER_H__
#define __USER_H__

//--------------------------------------------------------------------------------------//
// User Define Header
#include "../../DNN_Header/DNN.h"
//--------------------------------------------------------------------------------------//

namespace DNN{

/////////////////////////////////////
//    USER CLASS DEFINITION        //
/////////////////////////////////////
class User
    {
    protected:
        int id;
        char firstName[11];
        char lastName[11];
        char DateOfBirth[9];
        char Address[15];
        int PhoneNumber;

    public:

        // Constructor
        User(int id, const char *firstName, const char *lastName, const char *DateOfBirth, const char *Address, int PhoneNumber)
            : id(id), PhoneNumber(PhoneNumber)
        {
            strcpy(this->firstName, firstName);
            strcpy(this->lastName, lastName);
            strcpy(this->Address, Address);
            strcpy(this->DateOfBirth, DateOfBirth);
        }

        // Abstract Class Define
        class Customer;
        class Admin;
        class Staff;
};

class User::Customer : public DNN::User
{

private:
    char Account_id[30]; // Example data U0001

public:
    Customer(int id, const char* firstName, const char* lastName, const char* DateOfBirth, const char* Address, int PhoneNumber)
        : User(id, firstName, lastName, DateOfBirth, Address, PhoneNumber)
    {
    }
};

class User::Staff : private DNN::User
{
public:
    // Staff's Constructor
    Staff(int id, const char *firstName, const char *lastName, const char *DateOfBirth, const char *Address, int PhoneNumber) : User(id, firstName, lastName, DateOfBirth, Address, PhoneNumber)
    {
    }

};

class User::Admin : private DNN::User::Staff
{
public:
    // Admin's Constructor
    Admin(int id, const char *firstName, const char *lastName, const char *DateOfBirth, const char *Address, int PhoneNumber) : Staff(id, firstName, lastName, DateOfBirth, Address, PhoneNumber){};

    //  Overriding Admin's Method

    class Manage_Staff
    {

    public:
        void Insert();
        void Delete();
        void Update();
        void View();
        void Search();
    };
};

// =============================== //
// Manage Staff Method Definition  //
// =============================== //
}

#endif
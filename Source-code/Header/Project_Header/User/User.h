#ifndef __USER_H__
#define __USER_H__

#include "../../DNN_Header/DNN.h"

namespace DNN{

    class User{
        
        private:
            int id;
            char firstName[11];
            char lastName[11];
            char DateOfBirth[9]; 
            char Address[15];
            int PhoneNumber;
            // struct DateOfBirth{
            //     int Day;
            //     int Month;
            //     int Year;
            // };

        public:
        
        // Constructor 
        User(int id,const char* firstName,const char* lastName,const char* DateOfBirth,const char* Address,int PhoneNumber)
           : id(id),DateOfBirth(d), Address(Address),PhoneNumber(PhoneNumber){
               strcpy(this->firstName,firstName); 
               strcpy(this->lastName,lastName);
               strcpy(this->Address,Address);
               strcpy(this->DateOfBirth,DateOfBirth);
           }
        
        class Customer;
        class Admin;
        class Staff;
    };
}

class DNN::User::Admin{
    
    private:
        char username[16];
        char password[16];

    private:

    // Constructor 
    Admin(int id,const char* firstName,const char* lastName,const char* DateOfBirth,const char* Address,int PhoneNumber,char* username,char* password) :
        user(id,firstName,lastName,DateOfBirth,Address,PhoneNumber){
        
        strcpy(this->username,username);
        strcpy(this->password,password);

    }

       void Manage_Staff(){

       }


}

#endif
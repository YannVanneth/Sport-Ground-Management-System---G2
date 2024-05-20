#ifndef __USER_H__
#define __USER_H__

#include "../../DNN_Header/DNN.h"
#include <cstring>
#include <iostream>

namespace DNN{

    class User{
        
        private:
            int id;
            char firstName[11];
            char lastName[11];
            char DateOfBirth[9]; 
            char Address[15];
            int PhoneNumber;

        public:
        
        // Constructor 
        User(int id,const char* firstName,const char* lastName,const char* DateOfBirth,const char* Address,int PhoneNumber)
            : id(id),PhoneNumber(PhoneNumber){
               strcpy(this->firstName,firstName); 
               strcpy(this->lastName,lastName);
               strcpy(this->Address,Address);
               strcpy(this->DateOfBirth,DateOfBirth);
           }
        
        // Abstract Class Define  
        class Customer;
        class Admin;
        class Staff;
    };
}

class DNN::User::Customer : public DNN::User{
      
    private:
       char Account_id[30]; // Example data U0001
    
    public:
       Customer(int id,const char* firstName,const char* lastName,const char* DateOfBirth,const char* Address,int PhoneNumber) 
               : User(id,firstName,lastName,DateOfBirth,Address,PhoneNumber){
       }
       


};

class DNN::User::Admin : public DNN::User{
    
    private:
        char username[16];
        char password[16];

    public:

    // Admin's Constructor 
    Admin(int id,const char* firstName,const char* lastName,const char* DateOfBirth,const char* Address,int PhoneNumber,const char* username,const char* password) :
        User(id,firstName,lastName,DateOfBirth,Address,PhoneNumber){
        
        strcpy(this->username,username);
        strcpy(this->password,password);

    }

    private:
        void Manage_Staff(){

    }

    public:

    
    // Abstract Method 

    virtual void Manage_Customer() = 0;

    virtual void Manage_Store() = 0;

    virtual void Manage_Ground() = 0;


};

class DNN::User::Staff : public DNN::User::Admin{
      
      private: 
        //  Data Memeber 
      public:
        
        // Staff's Constructor 
        Staff(int id,const char* firstName,const char* lastName,const char* DateOfBirth,const char* Address,int PhoneNumber,const char* username,const char* password) :
            Admin(id,firstName,lastName,DateOfBirth,Address,PhoneNumber,username,password){};

        // Overriding Admin's Method 
        void Manage_Customer() override;

        void Manage_Store() override;

        void Manage_Ground() override;

};

#endif
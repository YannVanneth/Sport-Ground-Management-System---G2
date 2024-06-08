//-----------------------------------------------------------------------------------------------------------------------------------------------//
#ifndef __DNN_H__
#define __DNN_H__

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

// User Define Header
#include "../ANT_Library/HinsyOOPV2.h"

// Project Header

// #include "../Project_Header/User/User.h"
// #include "../Project_Header/Ground/Ground.h"
// #include "../Project_Header/Store/Store.h"

// DEFINE 

#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_RIGHT 77
#define KEY_SPACE 32
#define KEY_ESC 27
#define KEY_ENTER 13

using namespace HinsyOOP;

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN


/////////////////////////////////////
//    DNN NAMESPACE DEFINITION     //
/////////////////////////////////////

namespace DNN
{
   // Main Abstract Class
   class Authentication
   {
      public:
         class Admin;
         class Customer;
         class Staff;
   };
   
   class Ground
   {
      public:
         class Fusal;
         class Tennis;
         class Volleyball;
         class Basketball;
         class Checking;
         class Booking;
   };

   class Store
   {
      public:
        class Jersey;
        class Drinks;
        class Food;
        // Any Class   
   };
   class Design
   {
      public:
        class Ground;
        class Store;
        class User;
        // Any Class   
   };


} // End of DNN Namespace

#endif
// -------------------------------------------------------------------------------------------------------------------------------------------------//

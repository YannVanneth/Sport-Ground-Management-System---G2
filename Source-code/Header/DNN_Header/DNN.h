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

using namespace HinsyOOP;

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN


/////////////////////////////////////
//    DNN NAMESPACE DEFINITION     //
/////////////////////////////////////

namespace DNN
{
   // Main Abstract Class
   class User
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
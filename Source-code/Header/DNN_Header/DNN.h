#ifndef __DNN_H__
#define __DNN_H__
//--------------------------------------------------------------------------------------//
// User Define Header
#include "../ANT_Library/HinsyOOPV2.h"
#include "../Project_Header/User/User.h"
#include "../Project_Header/Ground/Ground.h"
#include "../Project_Header/Store/Store.h"

// Build-in Header
#include <ctime>
#include <chrono>
#include <cstring>
#include <string.h>
#include <vector>
#include <fstream>
//--------------------------------------------------------------------------------------//

using namespace HinsyOOP;

/////////////////////////////////////
//    DNN NAMESPACE DEFINITION     //
/////////////////////////////////////

namespace DNN
{
   // Main Abstract Class
   class User{
      public:
         class Admin;
         class Customer;
         class Staff;
   };
   class Ground{
      public:
         class Fusal;
         class Tennis;
         class Volleyball;
         class Basketball;
         class Checking;
         class Booking;
   };

   class Store{
      public:
        class Jersey;
        class Drinks;
        class Food;
        // Any Class   
   };
}

#endif
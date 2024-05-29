#ifndef __GROUND_H__
#define __GROUND_H__

//--------------------------------------------------------------------------------------//
// User Define Header
#include "../../DNN_Header/DNN.h"
//--------------------------------------------------------------------------------------//

/////////////////////////////////////
//    GROUND CLASS DEFINITION      //
/////////////////////////////////////
class Field{
    protected:
        int FieldNo;
        char FieldName[15];
        int FieldSize;
        float FieldPrice;
};
class DNN::Ground{
    public:
        class Fusal;
        class Volleyball;
        class Basketball;
        class Tennis;
};

/////////////////////////////////////
//    FUSAL CLASS DEFINITION       //
/////////////////////////////////////
class DNN::Ground::Fusal : public Field{
    public:
    // Methods
};

/////////////////////////////////////
//   VOLLEYBALL CLASS DEFINITION   //
/////////////////////////////////////
class DNN::Ground::Volleyball : public Field{
    public:
    // Methods
};

///////////////////////////////////////
//    BASKETBALL CLASS DEFINITION    //
///////////////////////////////////////
class DNN::Ground::Basketball : public Field{
    public:
    // Methods
};

//////////////////////////////////////
//    TENNIS CLASS DEFINITION       //
//////////////////////////////////////
class DNN::Ground::Tennis : public Field{
    public:
    // Methods
};


#endif
#ifndef __STORE_H__
#define __STORE_H__

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

// User Define Header
#include "../../DNN_Header/DNN.h"

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

namespace DNN
{
// CLASS DEFINITIONS
    class Store::Jersey
    {
        private: 
            int _JerseyCode;
            enum _JerseySize{ S = 0, M = 1, L = 2 };
            enum _JerseyColor{ Red = 0, Green = 1, Blue = 2 };
            enum _JerseyType{ Short = 0, Tall = 1, Wide = 2 };
            int _JerseyQuantity;
            float _JerseyPrice;
        
        public:
            Jersey();
            void Insert();
            void Display();

    };
}

// CLASS JERSEY DEFINITIONS
DNN::Store::Jersey::Jersey(){
    _JerseyCode = 0;
    _JerseyQuantity = 0;
    _JerseyPrice = 0;
    _JerseySize::L;
    _JerseyColor::Green;
    _JerseyType::Short;
}
void DNN::Store::Jersey::Insert()
{
    char press; int x;

    cout << "Enter Jersey Code: "; cin >> _JerseyCode;

    cout << "Enter Jersey Size: "; 

    do{
        if(x == 0) cout << "RED";
        else if(x == 1) cout << "GREEN";
        else if(x == 2) cout << "BLUE";

        switch(press){
            case KEY_ARROW_UP:
            {
                x++;

                if(x > 2) x = 0;
            }
                break;

            case KEY_ARROW_DOWN:
            { 
                x--;

                if(x < 0) x = 2;

            }
            
               break;

            default: cout << "CAN USE ONLY ARROW KEYS UP/DOWN"; H::delay(1000); break;    
        }
    }while(press != KEY_ENTER);

}

#endif
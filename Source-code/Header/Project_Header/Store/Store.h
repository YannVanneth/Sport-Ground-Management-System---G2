#ifndef __STORE_H__
#define __STORE_H__

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

// User Define Header
#include "../../DNN_Header/DNN.h"

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

namespace DNN::Store
{
// CLASS DEFINITIONS
    class Jersey
    {
        private: 
            int _JerseyCode;
            char _JerseySize;
            char _JerseyColor[5];
            char _JerseyType[6];
            int _JerseyQuantity;
            float _JerseyPrice;
        
        public:
            Jersey();
            void Insert();
            void Display(vector<Jersey> &v);
            void Update();
            void Delete();

    };
}

// CLASS JERSEY DEFINITIONS
DNN::Store::Jersey::Jersey(){
    _JerseyCode = 0;
    _JerseyQuantity = 0;
    _JerseyPrice = 0;
    _JerseySize = 'L'; 
    strcpy(_JerseyColor, "RED");
    strcpy(_JerseyType, "Soccer");
}
void DNN::Store::Jersey::Insert()
{
    char press; int x = 0;

    cout << "Enter Jersey Code: "; cin >> _JerseyCode;

    cout << "Enter Jersey Color: "; 

    do{
        H::clearBox(22,1,15,1,7);

        H::gotoxy(22,1); if(x == 0)
        {
            H::setcolor(4);  cout << "RED";
        }

        H::gotoxy(22,1); if(x == 1)
        {
            H::setcolor(2);  cout << "GREEN";
        }

        H::gotoxy(22,1); if(x == 2)
        {
            H::setcolor(9);   cout << "BLUE";
        }

        press = getch();

        switch(press)
        {
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
        }
    }while(press != KEY_ENTER);

    if(x == 0)
    {
        strcpy(this->_JerseyColor,"Red");

    }

    if(x == 1)
    {
        strcpy(this->_JerseyColor,"Green");
    }

    if(x == 2)
    {
        strcpy(this->_JerseyColor,"Blue");
    }

////////////////////////////////////////////////////////////////

    H::gotoxy(0,2); H::setcolor(7); cout << "Enter Jersey Size: ";

    do{
        H::gotoxy(22,2); if(x == 0)
        {
            H::setcolor(7);  cout << "S";
        }

        H::gotoxy(22,2); if(x == 1)
        {
            H::setcolor(7);  cout << "M";
        }

        H::gotoxy(22,2); if(x == 2)
        {
            H::setcolor(7);   cout << "L";
        }

        press = getch();

        switch(press)
        {
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
        }
    }while(press != KEY_ENTER);

    if(x == 0)
    {
        _JerseySize = 'S';

    }

    if(x == 1)
    {
        _JerseySize = 'M';
    }

    if(x == 2)
    {
        _JerseySize = 'L';
    }

    // /////////////////////////////////////////////////////////////////


    cout << "Enter Jersey Quantity: "; cin >> _JerseyQuantity;

    cout << "Enter Jersey Price: "; cin >> _JerseyPrice;

    cout << "Enter Jersey Type: "; cin >> _JerseyType;
}


void DNN::Store::Jersey::Display(vector<Jersey> &V)
{
    // cout << "Jersey Code: " << _JerseyCode << endl;
    // cout << "Jersey Size: " <<  _JerseySize << endl;
    // cout << "Jersey Color: " << _JerseyColor << endl;
    // cout << "Jersey Type: " << _JerseyType << endl;
    // cout << "Jersey Quantity: " << _JerseyQuantity << endl;
    // cout << "Jersey Price: " << _JerseyPrice << endl;
}

#endif
#include "Source-code/Header/DNN_Header/DNN.h"

using namespace DNN;


int main(){
    
    DNN::Store::Jersey* jersey = new DNN::Store::Jersey();

    jersey->Insert();

    H::cls();
    
    jersey->Display();

    return 0;
}
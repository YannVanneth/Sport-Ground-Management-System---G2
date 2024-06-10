#ifndef  _GROUND_H
#define  _GROUND_H

#include "..\..\DNN_Header\DNN.h"

/////////////////////////////////////////////////////////////
namespace DNN::Ground
{
    class Futsal{
        private:
            char number_ground[10];
            char ground_status[10];   ////// close or open
            char Booking_1[10];
            char Booking_2[10];
            int Start_Time;       /////// always 2 hours
            int End_Time;         /////// detect from start time +2 hours
            double Price;
        
        public:

            void Input();
            void Display();
            void Header();
            void Update();


    }
    class Volleyball{
        private:
            char number_ground[10];
            char ground_status[10];   ////// close or open
            char Booking_1[10];
            char Booking_2[10];
            int Start_Time;       /////// always 2 hours
            int End_Time;         /////// detect from start time +2 hours
            double Price;
        
        public:

            void Input();
            void Display();
            void Header();
    }

    class Tennis{
        private:
            char number_ground[10];
            char ground_status[10];   ////// close or open
            char Booking_1[10];
            char Booking_2[10];
            int Start_Time;       /////// always 2 hours
            int End_Time;         /////// detect from start time +2 hours
            double Price;
        
        public:

            void Input();
            void Display();
            void Header();
    }
    class Basketball{
        private:
            char number_ground[10];
            char ground_status[10];   ////// close or open
            char Booking_1[10];
            char Booking_2[10];
            int Start_Time;       /////// always 2 hours
            int End_Time;         /////// detect from start time +2 hours
            double Price;
        
        public:

            void Input();   
            void Display();
            void Header();
    }
}




/////////////////////////////////////////////////////////////
#endif
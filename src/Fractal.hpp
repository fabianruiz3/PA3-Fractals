#pragma once
#include <string>

class Fractal{
    public:
        virtual void draw() = 0;
        virtual std::string getName() = 0; 
        virtual int getLevel() = 0;
};
#pragma once
#include "AbstractFractal.hpp"
#include "Fractal.hpp"

class Fern : public AbstractFractal{

    public:
        Fern();
        void draw();
        void update();
        void drawHelper(float x, float y, float n);
        int getLevel() { return level; }
        std::string getName() { return name;}

};
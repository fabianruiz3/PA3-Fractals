#pragma once
#include "AbstractFractal.hpp"
#include <string>

class Rectangle: public AbstractFractal{
    private:
        double height = 300;
        double width = 300;
    public:
        Rectangle();
        void draw();
        void update();
        void drawHelper(double x, double y, double w, double h, int n);
        int getLevel() { return level; }
        std::string getName() { return name;}
};
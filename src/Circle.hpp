#pragma once
#include "AbstractFractal.hpp"
#include "ofApp.hpp"

class Circle : public AbstractFractal{
    private:
        float r = 0.31 * ofGetHeight();
        float angle = 0;

    public:
        Circle();
        void draw();
        void update();
        void drawHelper(float x, float y, float r, int n);
        int getLevel() { return level; }
        std::string getName() { return name;}

};
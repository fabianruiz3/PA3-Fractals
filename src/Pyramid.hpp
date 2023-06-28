#pragma once
#include "AbstractFractal.hpp"
#include "ofApp.hpp"

class Pyramid : public AbstractFractal{
    private:
        ofEasyCam camera;
        float size = 100;
    public:
        Pyramid();
        void draw();
        void update();
        void drawHelper(float x, float y, float z, float size, int n);
        int getLevel() { return level; }
        std::string getName() { return name;}

};
#pragma once
#include "AbstractFractal.hpp"
#include "ofApp.hpp"

class Triangle : public AbstractFractal{
    private:
        float size = 0.88 * ofGetHeight();

    public:
        Triangle();
        void draw();
        void update();
        void drawHelper(float x, float y, float s, int n);
        int getLevel() { return level; }
        std::string getName() { return name;}

};
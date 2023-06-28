#pragma once
#include "AbstractFractal.hpp"
#include "ofApp.hpp"

class Tree : public AbstractFractal{
    private:
        float length = 0.31 * ofGetHeight();

    public:
        Tree();
        void draw();
        void update();
        void drawHelper(float x, float y, int n, float length, float rad);
        int getLevel() { return level; }
        std::string getName() { return name;}

};
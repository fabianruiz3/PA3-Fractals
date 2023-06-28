#include "Tree.hpp"

Tree::Tree() : AbstractFractal("Tree", 1){
}

void Tree::draw(){
    drawHelper(ofGetWidth() / 2, ofGetHeight() - 20, getLevel(), length, 1.5 * PI);
    drawHelper(ofGetWidth() / 2 + 400, ofGetHeight() - 20, getLevel(), length / 4 , 1.5 * PI);
    drawHelper(ofGetWidth() / 2 - 400, ofGetHeight() - 20, getLevel(), length / 4 , 1.5 * PI);
}

void Tree::drawHelper(float x, float y, int n, float length, float rad) {
    if (n == 0) return;
    levelsColor(n);

    float x2 = x + length * cos(rad);
    float y2 = y + length * sin(rad);

    ofDrawLine(x, y, x2, y2);

    drawHelper(x2, y2, n - 1, 0.7 * length, rad + 0.2 * PI);
    drawHelper(x2, y2, n - 1, 0.7 * length, rad - 0.2 * PI);
}

void Tree::update(){

}
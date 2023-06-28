#include "Triangle.hpp"

Triangle::Triangle() : AbstractFractal("Sierpinski Triangle", 1){
}

void Triangle::draw(){
    drawHelper((ofGetWidth() - size) / 2, ofGetHeight() / 2 - 0.4 * size, size, getLevel());
}

void Triangle::drawHelper(float x, float y, float s, int n) {
    if (n == 0) {
        return;
    }
    ofPoint a(x, y);
    ofPoint b(x + s, y);
    ofPoint c(x + s/ 2, y + ((sqrt(3) * s) / 2));
    levelsColor(n);
    ofEnableDepthTest();
    ofDrawTriangle(a, b, c);

    drawHelper(x, y, s / 2, n - 1);
    drawHelper((a.x + b.x) / 2, (a.y + b.y) / 2, s / 2, n - 1);
    drawHelper((c.x + a.x) / 2, (c.y + a.y) / 2, s / 2, n - 1);
}

void Triangle::update(){

}
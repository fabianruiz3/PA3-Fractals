#include "Circle.hpp"

Circle::Circle() : AbstractFractal("Circle", 1){
}

void Circle::draw(){
    angle += 0.01;
    drawHelper(ofGetWidth() / 2, ofGetHeight() / 2, r, getLevel());
}

void Circle::drawHelper(float x, float y, float r, int n) {
    if (n == 0) return;
    levelsColor(n);

    int delta = r * 0.35;
    ofDrawCircle(x, y, r);

    float angle1 = angle;
    float angle2 = PI / 3 + angle;
    float angle3 = PI + angle;
    float angle4 = 2 * PI / 3 + angle;
    float angle5 = 4 * PI / 3 + angle;
    float angle6 = 5 * PI / 3 + angle;
    drawHelper(x + r * cos(angle1), y + r * sin(angle1), delta, n - 1);
    drawHelper(x + r * cos(angle2), y + r * sin(angle2), delta, n - 1);
    drawHelper(x + r * cos(angle3), y + r * sin(angle3), delta, n - 1);
    drawHelper(x + r * cos(angle4), y + r * sin(angle4), delta, n - 1);
    drawHelper(x + r * cos(angle5), y + r * sin(angle5), delta, n - 1);
    drawHelper(x + r * cos(angle6), y + r * sin(angle6), delta, n - 1);
}

void Circle::update(){

}
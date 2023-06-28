#include "Rectangle.hpp"
#include "ofApp.hpp"

Rectangle::Rectangle() : AbstractFractal("Rectangle", 1){

}

void Rectangle::draw(){
    drawHelper((ofGetWidth() / 2) - (width /2), (ofGetHeight() / 2) - (height /2) , width, height, getLevel());
}

void Rectangle::drawHelper(double x, double y, double w, double h, int n){
    if(n == 0) return;
    levelsColor(n);
    ofFill();

    ofDrawRectangle(x,y, w, h);

    drawHelper(x - w/4, y- h/4, w/2, h/2, n-1);
    drawHelper(x + (3*w)/4, y - h/4, w/2, h/2, n-1);
    drawHelper(x - w/4, y + (3*h)/4, w/2, h/2, n-1);
    drawHelper(x + (3*w)/4, y + (3*h)/4, w/2, h/2, n-1);
    
}

void Rectangle::update(){

}
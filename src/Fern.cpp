#include "Fern.hpp"
#include "ofApp.hpp"

Fern::Fern() : AbstractFractal("Barnsley Fern", 1){
}

void Fern::draw(){
    return drawHelper( 0, 0, getLevel()*1000);
}

void Fern::drawHelper(float x, float y, float n) {
    if (n == 0) return;
    float r = ofRandom(1);

    float px = ofMap(x, -2.1820, 2.6558, 0, ofGetWidth());
    float py = ofMap(y, 0, 9.9983, ofGetHeight(), 0);

    ofFill();
    // ofSetColor(ofColor::green);
    levelsColor(n / 1000);
    ofDrawCircle(px, py, 0.6);
    // ofSetColor(ofColor::white);

    if (r < 0.01)
        drawHelper(0, 0.16 * y, n - 1);

    else if (r < 0.86)
        drawHelper(0.85 * x + 0.04 * y, -0.04 * x + 0.85 * y + 1.6, n - 1);

    else if (r < 0.93)
        drawHelper(0.2 * x - 0.26 * y, 0.23 * x + 0.22 * y + 1.6, n - 1);

    else
        drawHelper(-0.15 * x + 0.28 * y, 0.26 * x + 0.24 * y + 0.44, n - 1);
}

void Fern::update(){
    
}
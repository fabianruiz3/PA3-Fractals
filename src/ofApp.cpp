#include "ofApp.hpp"
#include "SnowFlake.hpp"
#include "Triangle.hpp"
#include "Tree.hpp"
#include "Circle.hpp"
#include "Fern.hpp"
#include "Rectangle.hpp"
#include "Pyramid.hpp"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetEscapeQuitsApp(false);
    fullscreen = 0;
    fractalVector.push_back(new Circle());
    fractalVector.push_back(new Tree());
    fractalVector.push_back(new Triangle());
    fractalVector.push_back(new Fern());
    fractalVector.push_back(new SnowFlake());
    fractalVector.push_back(new Rectangle());
    fractalVector.push_back(new Pyramid());
}

//--------------------------------------------------------------
void ofApp::update() {
    fractalVector[mode-49]->update();
}

//--------------------------------------------------------------

void ofApp::draw() {
    ofBackgroundGradient(ofColor(65), ofColor(0), OF_GRADIENT_BAR);

    ofNoFill();
    ofDisableDepthTest();

    if(animate){
        if(counter == 0 && !reverseAnimate){
            if(fractalVector[mode-49]->getLevel() == 20)
            reverseAnimate = true;
          else{
            fractalVector[mode-49]->setLevel(fractalVector[mode-49]->getLevel()+1);
          }
          counter = 45;
        }
    else if(reverseAnimate && counter == 0){
        if(fractalVector[mode-49]->getLevel() == 1)
        reverseAnimate = false;
        else{
            fractalVector[mode-49]->setLevel(fractalVector[mode-49]->getLevel()-1);
        }
        counter = 45;
    }
        counter--;

    }

    fractalVector[mode-49]->draw();

    ofSetColor(ofColor::white);
    ofDrawBitmapString(fractalVector[mode-49]->getName() + ": " + mode, 10, 20);
    ofDrawBitmapString("Max Depth: 20", 10, 40);
    ofDrawBitmapString("Current Depth: " + to_string(fractalVector[mode-49]->getLevel()), 10, 60);
    ofDrawBitmapString("Frame Rate: " + ofToString(ofGetFrameRate(), 2), 10, 80);
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

    if (key >= '1' && key <= '7'){
        mode = key;
}
    else if ( key == ' '){
        animate = !animate;
        reverseAnimate = false;
        if(animate)
        fractalVector[mode-49]->setLevel(1);
    }
    else if (key == OF_KEY_F11)
        ofSetFullscreen(fullscreen++ % 2 == 0);
    else if (key == OF_KEY_ESC)
        ofSetFullscreen(false);
    fractalVector[mode-49]->keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {
}
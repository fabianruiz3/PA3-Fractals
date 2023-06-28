#pragma once

#include <cmath>
#include <vector>

#include "ofMain.h"
#include "AbstractFractal.hpp"

class ofApp : public ofBaseApp {
  private:
    char mode = '1';
    unsigned int fullscreen;
    vector<AbstractFractal*> fractalVector;
    bool animate = false;
    bool reverseAnimate = false;
    int counter = 45;

  public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
};

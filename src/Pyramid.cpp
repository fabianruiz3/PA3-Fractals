#include "Pyramid.hpp"

Pyramid::Pyramid() : AbstractFractal("3D Pyramid", 1){
}


void Pyramid::draw(){
    camera.begin();
    glm::vec3 pos = camera.getPosition();
    drawHelper(pos.x/2, pos.y/2 , pos.z/2, size, getLevel());
    camera.end();
}

void Pyramid::drawHelper(float x, float y, float z, float s, int n) {
    if(n==0)
        return;
    levelsColor(n);
    ofFill();
    ofEnableDepthTest();
    ofDrawBox(x, y, z, s, s, s);
    ofNoFill();
    ofSetColor(ofColor::black);
    ofDrawBox(x, y, z, s, s, s);


    drawHelper(x + s, y - s/2, z + s, s/2, n-1);
    drawHelper(x, y - s, z, s/2, n-1);
    drawHelper(x - s, y - s/2, z, s/2, n-1);
    drawHelper(x + s, y - s/2, z, s/2, n-1);
    drawHelper(x, y - s/2, z - s, s/2, n-1);
    drawHelper(x, y - s/2, z + s, s/2, n-1);
    drawHelper(x + s, y - s/2, z - s, s/2, n-1);
    drawHelper(x - s, y - s/2, z + s, s/2, n-1);
    drawHelper(x - s, y - s/2, z - s, s/2, n-1);
}

void Pyramid::update(){

}
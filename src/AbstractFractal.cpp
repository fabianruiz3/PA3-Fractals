#include "AbstractFractal.hpp"
#include "ofApp.hpp"
 
AbstractFractal::AbstractFractal(std::string name, int level){
   this->name = name;
   this->level = level;
}

AbstractFractal::~AbstractFractal(){
}
 
void AbstractFractal::keyPressed( int key ){
   if(key == OF_KEY_LEFT && level > 1)
      setLevel(level-1);
   if(key == OF_KEY_RIGHT && level < 20)
      setLevel(level+1);
}
 
void AbstractFractal::levelsColor(int level){
   if(level / 3 == 0){
        ofSetColor(106,243,207);
    }
    if(level/3 == 1){
        ofSetColor(165,144,249);
    }
    if(level/3 >= 2){
        ofSetColor(246,70,99);
    }
}

void AbstractFractal::draw(){
   
}
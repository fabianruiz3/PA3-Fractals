#pragma once
#include "Fractal.hpp"
#include <string>
 
class AbstractFractal : public Fractal{
   protected:
       std::string name;
       int level;
       static void levelsColor( int level );
   public:
       AbstractFractal(std::string name, int level);
       ~AbstractFractal();
       void setName( std::string name ) { this->name = name; }
       void setLevel( int level ) { this->level = level; }
       void keyPressed( int key );
       virtual void update() = 0;
       virtual void draw();
       int getLevel() { return level; }
       std::string getName() { return name;}
 
 
};

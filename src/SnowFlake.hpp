#pragma once

#include "ofMain.h"
#include "AbstractFractal.hpp"
#include <cmath>

/**
 * @brief Koch SnowFlake Fractal
 *
 */

class SnowFlake : public AbstractFractal{
  private:
    glm::vec2 start;
    glm::vec2 end;

  public:
    SnowFlake();
    ~SnowFlake();
    SnowFlake(glm::vec2 start, glm::vec2 end);

    glm::vec2 getStart() const { return start; }
    glm::vec2 getEnd() const { return end; }
    void setStart(glm::vec2 start) { this->start = start; }
    void setEnd(glm::vec2 end) { this->end = end; }
    int getLevel() { return level; }
    std::string getName() { return name;}

    void draw();
    void drawHelper(int n, SnowFlake *flake);
    void update();

    glm::vec2 getA();
    glm::vec2 getB();
    glm::vec2 getC();
    glm::vec2 getD();
    glm::vec2 getE();
};
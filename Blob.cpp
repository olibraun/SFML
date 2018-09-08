#include "Blob.hpp"
#include<cstdlib>
#include<iostream>

Blob::Blob() {
}

void Blob::update(unsigned int maxWidth, unsigned int maxHeight) {
  const float max = static_cast<float>(RAND_MAX);
  float randX = 2*(std::rand() / max) - 1;
  float randY = 2*(std::rand() / max) - 1;
  
  myX += randX;
  myY += randY;

  if(myX > maxWidth) {
    myX -= maxWidth;
  } else if (myX < 0) {
    myX += maxWidth;
  }

  if(myY > maxHeight) {
    myY -= maxHeight;
  } else if (myY < 0) {
    myY += maxHeight;
  }
}

void Blob::render(sf::RenderWindow& window) {
  sf::CircleShape shape;

  shape.setFillColor(sf::Color::Green);

  shape.setRadius(myRadius);
  shape.setPosition(myX, myY);

  window.draw(shape);
}
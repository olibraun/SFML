#pragma once
#include <SFML/Graphics.hpp>

class Blob {
  private:
  float myRadius = 5;
  float myX = 300;
  float myY = 300;

  public:
  Blob();
  void update(unsigned int maxWidth, unsigned int maxHeight);
  void render(sf::RenderWindow& window);
};
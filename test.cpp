#include <SFML/Graphics.hpp>
#include "Blob.hpp"

std::vector<Blob> blobs;

unsigned int windowWidth = 1200;
unsigned int windowHeight = 800;
const int NUMBER_OF_BLOBS = 250;

int main() {
  sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "BLOBS!");
  //window.setFramerateLimit(80);

  for(int i = 0; i <= NUMBER_OF_BLOBS; i++) {
    Blob blob;
    blobs.push_back(blob);
  }

  while (window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear();
    for(auto& blob: blobs) {
      blob.update(windowWidth, windowHeight);
      blob.render(window);
    }
    window.display();
    
  }

  return 0;
}
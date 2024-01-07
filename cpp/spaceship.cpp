#include <string>
#include "spaceship.h"

Spaceship::Spaceship(){
  name = "No name";
  hp = 500;
  shield = 100.0f;
}

Spaceship::Spaceship(std::string name, int hp, float shield){
  this->name = name;
  this->hp = hp;
  this->shield = shield;
}

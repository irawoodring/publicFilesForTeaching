#include <string>

class Spaceship {
  public:
    Spaceship(){
      name = "No name yet";
      hp = 500;
      shield = 100.0f;
    }
    Spaceship(std::string name, int hp, float shield){
      this->name = name;
      this->hp = hp;
      this->shield = shield;
    }

  private:
    std::string name;
    int hp;
    float shield;
}

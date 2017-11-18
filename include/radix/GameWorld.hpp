#ifndef RADIX_GAME_WORLD_HPP
#define RADIX_GAME_WORLD_HPP

#include <map>
#include <radix/input/InputSource.hpp>
#include <radix/data/screen/Screen.hpp>

namespace radix {

class GameWorld {
public:
  InputSource &input;
  GameWorld(InputSource &input);
  void addScreen(Screen &screen);
  std::list<Screen>* getScreens();
private:
  std::list<Screen> screens;
};

} /* namespace radix */

#endif /* RADIX_GAME_WORLD_HPP */

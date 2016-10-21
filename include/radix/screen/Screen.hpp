#ifndef RADIX_SCREEN_HPP
#define RADIX_SCREEN_HPP

#include <string>
#include <vector>
#include <radix/core/math/Vector3f.hpp>
#include <radix/core/math/Vector4f.hpp>

namespace radix {

struct Text {
  Vector4f color;
  std::string text;
  std::string align;
  float z;
  float top;
  float size;
};

struct Screen {
  Vector4f color;
  std::vector<Text> text;
};
} /* namespace radix */

#endif //RADIX_SCREEN_HPP
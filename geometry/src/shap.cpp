#include <geometry/shap.h>

namespace geometry {

Rectangle::Rectangle(int width, int height) : m_width{width}, m_height{height} {}

int Rectangle::area() {
    return m_width * m_height;
}
}  // namespace geometry
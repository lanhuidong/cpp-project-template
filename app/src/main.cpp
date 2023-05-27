#include <fmt/core.h>
#include <geometry/shap.h>

#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
    std::cout << "This is C++ project template!" << std::endl;
    std::unique_ptr<geometry::Shap> shap = std::make_unique<geometry::Rectangle>(3, 4);
    std::cout << "rectangle area is " << shap->area() << std::endl;
    return 0;
}
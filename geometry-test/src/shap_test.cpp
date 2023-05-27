#include <geometry/shap.h>
#include <gtest/gtest.h>

#include <memory>

TEST(shap_test, shap_test) {
    std::unique_ptr<geometry::Shap> shap = std::make_unique<geometry::Rectangle>(3, 4);
    EXPECT_EQ(shap->area(), 12);
    EXPECT_EQ(1, 1);
}

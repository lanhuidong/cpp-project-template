file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)

enable_testing()
find_package(GTest REQUIRED)
add_executable(shap_test ${srcs})

target_include_directories(shap_test PUBLIC ${GTest_INCLUDE_DIRS})

target_link_libraries(shap_test PUBLIC geometry GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(shap_test)

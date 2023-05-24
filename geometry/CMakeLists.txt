file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)

set(binary geometry)

add_library(${binary} SHARED ${srcs})

target_include_directories(${binary} PUBLIC include)
file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)

set(binary app)

add_executable(${binary} ${srcs})

target_link_libraries(${binary} geometry fmt::fmt)

target_include_directories(${binary} PUBLIC include ${fmt_INCLUDE_DIRS})
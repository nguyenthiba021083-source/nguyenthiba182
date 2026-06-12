cmake_minimum_required(VERSION 3.25)

project(AILevelEditor)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    FILES
        src/main.cpp
        src/AIMenu.hpp
        src/AIMenu.cpp
        src/AISystem.hpp
        src/AISystem.cpp
)

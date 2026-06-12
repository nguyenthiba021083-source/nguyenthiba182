cmake_minimum_required(VERSION 3.25)

project(AILevelEditor)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    FILES
src/main.cpp
src/EditorUIHook.cpp

src/AIMenu.cpp
src/AIMenu.hpp

src/AISystem.cpp
src/AISystem.hpp

src/AIBuilder.cpp
src/AIBuilder.hpp

src/PatternManager.cpp
src/PatternManager.hpp


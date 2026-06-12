#pragma once
#include <Geode/Geode.hpp>
#include <string>

class AISystem {
public:
    // Hàm nhận lệnh từ prompt của người dùng để tạo object trong game
    static void generateObjectsFromAI(std::string prompt);
};

#pragma once
#include <Geode/Geode.hpp>

using namespace geode::prelude;

// Tạo một lớp layer mới cho Menu AI kế thừa từ CCLayer của Cocos2d
class AIMenu : public CCLayer {
protected:
    bool init() override;
public:
    static AIMenu* create();
    void openMenu(CCObject* sender); // Hàm để mở menu khi bấm nút
};

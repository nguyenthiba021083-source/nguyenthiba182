#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include "AIMenu.hpp"

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto winSize = CCDirector::sharedDirector()->getWinSize();

        // Tạo nút bấm kích hoạt Menu AI
        auto sprite = CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png");
        auto btn = CCMenuItemSpriteExtra::create(
            sprite, this, menu_selector(AIMenu::openMenu)
        );

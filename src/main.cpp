#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include "AIMenu.hpp"

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto sprite = CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png");
        auto btn = CCMenuItemSpriteExtra::create(
            sprite, this, menu_selector(AIMenu::openMenu)
        );

        auto menu = CCMenu::create(btn, nullptr);
        menu->setPosition(winSize.width / 2, winSize.height / 2 - 100);
        this->addChild(menu);

        return true;
    }
};

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
            sprite, this, menu_selector(MyMenuLayer::onAIButtonClick)
        );

        auto menu = CCMenu::create(btn, nullptr);
        menu->setPosition(winSize.width / 2, winSize.height / 2 - 100);
        this->addChild(menu);

        return true;
    }

    // Tạo hàm xử lý nút bấm ngay tại đây để tránh lỗi biên dịch
    void onAIButtonClick(CCObject* sender) {
        auto scene = CCScene::create();
        auto layer = AIMenu::create();
        if (layer) {
            scene->addChild(layer);
            CCDirector::sharedDirector()->pushScene(CCTransitionFade::create(0.5f, scene));
        }
    }
};

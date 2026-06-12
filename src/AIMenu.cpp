#include "AIMenu.hpp"

AIMenu* AIMenu::create() {
    auto ret = new AIMenu();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool AIMenu::init() {
    if (!CCLayer::init()) return false;

    auto winSize = CCDirector::sharedDirector()->getWinSize();

    auto label = CCLabelBMFont::create("AI Level Editor", "bigFont.fnt");
    label->setPosition(winSize.width / 2, winSize.height / 2 + 50);
    this->addChild(label);

    // Bật nhận diện phím Back/Escape trên bàn phím
    this->setKeypadEnabled(true);

    return true;
}

// Thêm hàm này để xử lý khi người dùng bấm nút mở Menu
void AIMenu::openMenu(CCObject* sender) {
    auto scene = CCScene::create();
    auto layer = AIMenu::create();
    scene->addChild(layer);
    CCDirector::sharedDirector()->pushScene(CCTransitionFade::create(0.5f, scene));
}

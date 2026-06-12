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

    // Lấy kích cỡ màn hình game
    auto winSize = CCDirector::sharedDirector()->getWinSize();

    // Tạo một chữ tiêu đề cho Menu AI
    auto label = CCLabelBMFont::create("AI Level Editor", "bigFont.fnt");
    label->setPosition(winSize.width / 2, winSize.height / 2 + 50);
    this->addChild(label);

    return true;
}

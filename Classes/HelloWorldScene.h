#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
    // Constructor and Destructor
    HelloWorld();
    virtual ~HelloWorld();
    
    // Callback functions
    bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event) override;
    void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event) override;
    
    // Properties
    CC_SYNTHESIZE(bool, _rightFlg, RightFlg);
    CC_SYNTHESIZE_RETAIN(cocos2d::Sprite*, _sprite, Sprite);
    CC_SYNTHESIZE_RETAIN(cocos2d::EventListener*, _eventListener, EventListener);
};

#endif // __HELLOWORLD_SCENE_H__

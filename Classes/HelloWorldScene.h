#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "XKPageView.h"

USING_NS_CC_EXT;

class HelloWorld : public cocos2d::Layer, public XKPageViewDelegate
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    
// PageViewDelegate
    virtual Size sizeForPerPage();
    virtual void pageViewDidScroll(XKPageView *pageView);
private:
    XKPageView *pageView;
    void addPages();
public:
    virtual void onEnter();
};

#endif // __HELLOWORLD_SCENE_H__
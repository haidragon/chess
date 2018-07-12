//
//  Stone.hpp
//  myGame
//
//  Created by 刘海龙 on 2018/7/11.
//

#ifndef __STONE_H__
#define __STONE_H__

#include "cocos2d.h"
USING_NS_CC;

class Stone : public CCSprite
{
public:
    CREATE_FUNC(Stone);
    bool init();
    
    enum TYPE{CHE, MA, PAO, BING, JIANG, SHI, XIANG};
    
    void initStone(int id);
    CCPoint fromPlate();
    
    int _id;
    bool _red;
    int _row;
    int _col;
    TYPE _type;
    bool _dead;
    
    static int _d;
    static int _offx;
    static int _offy;
};

#endif


#pragma once

#include "ofMain.h"

class Sphere {
public:
    Sphere();

    // 半径や座標の更新
    void update();
    // 描画
    void draw();
    
    // 生存可能か判定
    bool check();
    
    // 座標
    ofVec3f position;
    // 速度
    ofVec3f velosity;
    // 半径
    float radius;
    // 色
    ofColor color;
    
    // 最大半径
    float maxRad;
    
    // 生存を管理
    bool checkDel = false;
};

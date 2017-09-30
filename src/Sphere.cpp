#include "Sphere.h"

Sphere::Sphere() {
    position.set(ofRandom(-500, 500), ofRandom(0, 500), ofRandom(-500, 500));
    velosity.set(0, -1, 0);
    radius = ofRandom(1);
    color.set(ofRandom(50, 255), ofRandom(50, 200), ofRandom(100, 255));
    
    maxRad = radius + ofRandom(5);
    
    // positionのy座標を上に動かす
    position.y += 150;
}

void Sphere::update() {
    if(radius <= maxRad){
        radius += 0.2;
    } else if(position.y > -100) {
        // 半径を加速度として扱う(大きいものほど早く落ちる)
        velosity.y += -radius/100.0;
        position += velosity;
    } else {
        checkDel = true;
    }
}

void Sphere::draw() {
    //ofSetColor(color, 255 -((radius / maxRad) * 255));
    
    // y座標が0以下で-100にいくまでに透明度でフェードアウトする
    ofSetColor(color, position.y < 0 ? 255 - ((-position.y/100.0)*255) : 255);
    
    ofDrawSphere(position, radius);
}

bool Sphere::check() {
    if(checkDel){
        return true;
    } else {
        return false;
    }
}

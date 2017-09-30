#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    // 奥行きを有効化
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_SMOOTH);
    // ブレンドモード
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    cam.setDistance(50);
}

//--------------------------------------------------------------
void ofApp::update(){
    // 球の追加
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    sphere.push_back(Sphere());
    // 寿命が来た球の削除
    int sphereSize = sphere.size();
    for(int i = 0; i < sphereSize; ++i)
        if(sphere[i].check())
            sphere.erase(sphere.begin() + i);
    
    // 球の更新
    for(int i = 0; i < sphere.size(); ++i)
        sphere[i].update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    // 画面全体の座標を画面の中心へ
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    
    cam.begin();
    
    // 球の描画
    for(int i = 0; i < sphere.size(); ++i)
        sphere[i].draw();
    
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

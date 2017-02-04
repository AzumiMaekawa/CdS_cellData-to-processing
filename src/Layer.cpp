//
//  Layer.cpp
//  AyatsuriSimulation
//
//  Created by AzumiMaekawa on 2017/01/26.
//
//

#include "Layer.hpp"

Layer::Layer(){
    for(int i = 0; i < Speed; i++){
    pos[i].x = ofGetWidth()/2 - w/2;
    }
    for(int i = 0; i < Num; i++){
        pos[i].y = ofGetHeight() - i;
    }
}

void Layer::draw(){
    ofSetColor(255, 255, 255);
   // ofDrawRectangle(pos[i].x, pos[i].y, w, h);
    for(int i = 0; i < count; i++){
        for(int j = 0; j < w/2; j++){
            ofSetColor(110 + j*5, 110 + j*5, 110 +j*5);
            ofDrawRectangle(pos[i].x+j, pos[i].y, 1, h);
        }
        for(int j = 0; j < w/2; j++){
            ofSetColor(400-j*5, 400+-j*5, 400-j*5);
            ofDrawRectangle(pos[i].x+j+w/2, pos[i].y, 1, h);
        }
        
    
        
    }
    
    
}

void Layer::update(){
    count = ofGetElapsedTimef() * Speed;
    for(int i = Num-1; i > count; i--){
        pos[i].x = pos[i-1].x + (mousePos.x - pos[i-1].x) * 0.003;
    }
}
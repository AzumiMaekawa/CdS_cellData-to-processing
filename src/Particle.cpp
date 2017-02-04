//
//  Particle.cpp
//  AyatsuriSimulation
//
//  Created by AzumiMaekawa on 2017/01/26.
//
//

#include "Particle.hpp"


ofImage Particle::img;

Particle::Particle(){
    
    img.load("light_data04.png");
    size = 30;
}

void Particle::setup(){
    ofEnableAlphaBlending();
}

void Particle::update(){
    
}

void Particle::draw(){
    ofSetColor(255,255,255);
    img.draw(p,5 * size, 5 * size);
}
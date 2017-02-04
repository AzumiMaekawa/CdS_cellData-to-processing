//
//  Particle.hpp
//  AyatsuriSimulation
//
//  Created by AzumiMaekawa on 2017/01/26.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include <ofMain.h>

#endif /* Particle_hpp */

class Particle{
public:
    Particle();
    void update();
    void draw();
    static void setup();
    
    static ofImage img;
    ofPoint p;
    ofPoint c;
    double size;
    
private:
    
    
    
};

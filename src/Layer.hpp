//
//  Layer.hpp
//  AyatsuriSimulation
//
//  Created by AzumiMaekawa on 2017/01/26.
//
//

#ifndef Layer_hpp
#define Layer_hpp
#define Num 2000
#define Speed 8

#include <stdio.h>
#include <ofMain.h>

#endif /* Layer_hpp */

class Layer{
    
public:
    
    Layer();
    void update();
    void draw();
    
    
    int w = 100;
    int h = 1;
    int count;
    
    ofPoint pos[Num];
    ofPoint mousePos;
    
    
private:
    
};

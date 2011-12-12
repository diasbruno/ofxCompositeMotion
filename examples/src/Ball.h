/*
 *  Ball.h
 *  emptyExample
 *
 *  Created by BH on 12/11/11.
 *  Copyright 2011 Freelancer Interactive Developer. All rights reserved.
 *
 */

#ifndef GW_BALL
#define GW_BALL

#include "ofMain.h"

class Ball : public ofPoint {

public:
	
	Ball(float _x = 0, float _y = 0) {
		x = _x;
		y = _y;
		
		r = 0.0;
		b = 0.0;
		g = 0.0;
	}
	
	void draw() {
		ofSetCircleResolution(32);
		ofSetColor(r, b, g);
		ofEllipse(x, y, 20, 20);
	}
	
	float r;
	float b;
	float g;
	
};

#endif
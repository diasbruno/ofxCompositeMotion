/*
 *  Position2DMotion.h
 *  emptyExample
 *
 *  Created by BH on 12/11/11.
 *  Copyright 2011 Freelancer Interactive Developer. All rights reserved.
 *
 */

#ifndef OFX_COMPOSITEMOTION_POSITION2D
#define OFX_COMPOSITEMOTION_POSITION2D

#include "CompositeMotion.h"

class Position2DMotion : public CompositeMotion {
	
public:
	
	Position2DMotion(bool autoStart = true, bool isInfinity = true, float endX = 0.0, float endY = 0.0, int ease = 1);
	
	//--------------------------------------------------------
	void start() {};
	void update(int time);
	
	//--------------------------------------------------------
	void properties(float* x, float* y);	
	void endAt(float endX, float endY);
	
protected:
	
	float* _x;
	float* _y;
	
	float _endX;
	float _endY;
	
	bool _autoStart;
	bool _isInfinity;
	
	int _ease;
	
};


#endif /* OFX_COMPOSITEMOTION_POSITION2D */
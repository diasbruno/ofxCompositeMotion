/*
 *  Motion.h
 *  emptyExample
 *
 *  Created by BH on 12/11/11.
 *  Copyright 2011 Freelancer Interactive Developer. All rights reserved.
 *
 */

#ifndef OFX_COMPOSITEMOTION_MOTION
#define OFX_COMPOSITEMOTION_MOTION

#include "TCompositeMotion.h"
#include "CompositeMotion.h"

class Motion : public Composite<CompositeMotion> {
public:
		
	void update(int time) {
		
		unsigned int size = motions.size();
		
		for (unsigned int i = 0; i < size; i++) {
			motions[i]->update(time);
		}
		
	}
	
};

#endif /* OFX_COMPOSITEMOTION_MOTION */
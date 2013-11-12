//
//  PathNode.h
//  GAM-1514 OSX Game
//
//  Created by Ryan Gordon on 2013-11-12.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__PathNode__
#define __GAM_1514_OSX_Game__PathNode__

class PathNode 
{
public:
    PathNode();
    ~PathNode();

	int getTile();

	int getHScore();
	int getGScore();
    
    const char* getName();

private:
    void buttonAction(UIButton* button);
};

#endif /* defined(__GAM_1514_OSX_Game__PathNode__) */

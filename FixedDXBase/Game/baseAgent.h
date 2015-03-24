#ifndef _BASE_AGENT_H_
#define _BASE_AGENT_H_

#include "agentModel.h"
#include "VBCube.h"
#include "gamedata.h"


class baseAgent
{

	VBCube* agentBody;
	static int setPos;

public:
	baseAgent(ID3D11Device* _pd3dDevice, MyEffectFactory* _EF/*, GameData* _GD*/);
	~baseAgent();

	void tick(GameData* GD);
	void draw(DrawData* DD);


	void behaviour();






};


#endif
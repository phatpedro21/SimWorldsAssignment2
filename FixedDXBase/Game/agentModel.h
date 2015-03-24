#ifndef _AGENT_MODEL_H_
#define _AGENT_MODEL_H_
#include "CMOGO.h"
//I suppose we shoudl really call this the main palyer character

class agentModel : public CMOGO
{
public:
	agentModel(string _fileName, ID3D11Device* _pd3dDevice, MyEffectFactory* _EF);
	~agentModel();

	void Tick(GameData* GD);

protected:

};

#endif
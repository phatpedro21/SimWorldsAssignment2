#include "baseAgent.h"


baseAgent::baseAgent(ID3D11Device* _pd3dDevice, MyEffectFactory* _EF/*, GameData* _GD*/)
{
	const int cubeSize = 2;
	agentBody = new VBCube();
	agentBody->init(cubeSize, _pd3dDevice);
	agentBody->SetPos(Vector3(setPos, setPos, setPos));
	setPos += 10;
}

baseAgent::~baseAgent()
{

}

void baseAgent::tick(GameData* GD)
{
	agentBody->Tick(GD);

	behaviour();
	
}

void baseAgent::draw(DrawData* DD)
{
	agentBody->Draw(DD);
}

void baseAgent::behaviour()
{


}

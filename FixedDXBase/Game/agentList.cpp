#include "agentList.h"


agentList::agentList(ID3D11Device* _pd3dDevice, MyEffectFactory* _EF)
{

}


agentList::~agentList()
{

}

void agentList::addAgent(list<GameObject*>* _objectList)
{
	baseAgent* newAgent = new baseAgent(m_pd3dDevice, m_EF);
	m_agentList.push_back(newAgent);


}


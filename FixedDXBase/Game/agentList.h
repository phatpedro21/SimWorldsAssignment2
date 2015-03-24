#ifndef _AGENT_LIST_H_
#define _AGENT_LIST_H_

#include "baseAgent.h"
#include <list>

class agentList
{
	agentList(ID3D11Device* _pd3dDevice, MyEffectFactory* _EF);
	~agentList();

	void addAgent(list<GameObject*>* _objectList);

	
	list<baseAgent*> m_agentList;

	//holding these to pass to new agents
	ID3D11Device* m_pd3dDevice;
	MyEffectFactory* m_EF
	
};


#endif
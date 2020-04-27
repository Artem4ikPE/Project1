#pragma once
#include "flybehavior.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay(); ~FlyNoWay(void);
	void Fly();
};
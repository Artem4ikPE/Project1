#pragma once
#include "quackbehavior.h"
class MuteQuack :
	public QuackBehavior
{
public: MuteQuack();
	  ~MuteQuack(void);
	  void Queak();
};
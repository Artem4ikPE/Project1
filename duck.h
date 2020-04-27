#pragma once
#include <iostream> 
using namespace std;
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class Duck
{
FlyBehavior * f1; QuackBehavior* q1;

public:
void SetFlyBehavior(FlyBehavior* f)
{
this -> f1 = f;
}
void Fly()
{
f1 -> Fly();
}
void SetQuackBehavior(QuackBehavior* q)
{
this -> q1 = q;
}
void Quack()
{
q1 -> Quack();
}
virtual void display() = 0;
};
#include <iostream> 
using namespace std; 
#include "DecoyDuck.h"
#include "duck.h"
#include "flybehavior.h"
#include "FlyWithWings.h"
#include "quackbehavior.h"
#include "QuackQuack.h"
#include "Source.h"
#include "Source1.h"
#include "Source2.h"
#include "Source3.h"
#include "Source4.h"
#include "Source5.h"
#include "Source6.h"
#include "Source7.h"
#include "Source8.h"
#include "conio.h"


void main()
{
	Duck** di;
	int a; 
	int n;
	FlyBehavior* fb_flywithwings, * fb_flynoway; QuackBehavior* qb_quackquack, * qb_mutequack,
		* qb_squeak;
	qb_quackquack = new QuackQuack();
	qb_mutequack = new MuteQuack();
	qb_squeak = new SqueakSqueak();
	fb_flywithwings = new FlyWithWings(); 
	fb_flynoway = new FlyNoWay();
	cout << "How many ducks in the pool ? " << endl;
	cin >> a;
	di = new Duck * [a];
	for (int i = 0; i < a; i++)
	{
		cout << "EnterDuck - type: 1 - Mallard, 2 - Redhead, 3 - Rubber, 4 - Decoy" << endl; 
		cin >> n;
		switch(n)
		{
		case 1:
			di[i] = new MallardDuck(); di[i] -> SetQuackBehavior(qb_quackquack); di[i] -> SetFlyBehavior(fb_flywithwings);
			break; case2:
			di[i] = new RedheadDuck(); di[i] -> SetQuackBehavior(qb_quackquack); di[i] -> SetFlyBehavior(fb_flywithwings);
			break;
		case 3:
			di[i] = new RubberDuck(); di[i] -> SetQuackBehavior(qb_squeak); di[i] -> SetFlyBehavior(fb_flynoway);
			break; case4:
			di[i] = new DecoyDuck(); di[i] -> SetQuackBehavior(qb_mutequack); di[i] -> SetFlyBehavior(fb_flynoway);
break; default:
	di[i] = new MallardDuck(); di[i] -> SetQuackBehavior(qb_quackquack); di[i] -> SetFlyBehavior(fb_flywithwings);
	break;
		}
	}
	for (int i = 0; i < a; i++)
	{
		di[i] -> Fly(); di[i] -> Quack(); di[i] -> display();
	}

	for (int i = 0; i < a; i++)
	{
		delete di[i];
	}
	delete [] di;
	delete fb_flywithwings; delete fb_flynoway; delete qb_quackquack; delete qb_mutequack; delete qb_squeak;

	getch();
}
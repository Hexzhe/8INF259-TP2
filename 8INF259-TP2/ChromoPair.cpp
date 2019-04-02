#include "pch.h"
#include "ChromoPair.h"

ChromoPair::ChromoPair(char a, char b)
{
	this->a = toupper(a);
	this->b = toupper(b);
}

ChromoPair* operator + (const ChromoPair& a, const ChromoPair& b)
{
	ChromoPair* c = new ChromoPair;

	srand((unsigned)time(0));
	int r1 = (rand() % 2), r2 = (rand() % 2), r3 = (rand() % 2); //Flip 3 coins

	if (r1)
	{
		//Take one from a
		c->a = r2 == 0 ? a.a : a.b;

		//Then b
		c->b = r3 == 0 ? b.a : b.b;
	}
	else
	{
		//Take one from b
		c->a = r3 == 0 ? b.a : b.b;

		//Then a
		c->b = r2 == 0 ? a.a : a.b;
	}

	return c;
}

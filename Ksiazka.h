#include <iostream>
#include "NaStanie.h"
#ifndef KSIAZKA_H
#define KSIAZKA_H

using namespace std;

class Ksiazka : public NaStanie
{
	public:
	int ileStron;
	
	Ksiazka();
	Ksiazka(string, int);
	
	~Ksiazka();
};

#endif

#include <iostream>
#ifndef NASTANIE_H
#define NASTANIE_H

using namespace std;

class NaStanie
{
	public:
	string nazwa;
	
	NaStanie();
	NaStanie(string);
	
	virtual ~NaStanie(){};
};

#endif

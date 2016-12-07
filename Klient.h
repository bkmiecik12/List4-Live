#include <iostream>
#include <vector>
//#include <typeinfo>
#include "NaStanie.h"
#ifndef KLIENT_H
#define KLIENT_H

using namespace std;

class Klient
{
	public:
	vector <NaStanie*> historia;
	
	Klient();
	~Klient();
	
	int ilePrzeczytal();
	int ileObejrzal();
	//void display(NaStanie*);
	
	void operator+(NaStanie*);
};

#endif

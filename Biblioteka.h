#include <iostream>
#include <vector>
#include "NaStanie.h"
#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

using namespace std;

class Biblioteka
{
	public:
	vector <NaStanie*> lista;
	
	Biblioteka();
	
	~Biblioteka();
};

#endif

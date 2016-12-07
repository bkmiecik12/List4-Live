#include <iostream>
#include "NaStanie.h"
#ifndef DVD_H
#define DVD_H

using namespace std;

class DVD : public NaStanie
{
	public:
	int jakDlugo;
	
	DVD();
	DVD(string,int);
	
	~DVD();
};

#endif

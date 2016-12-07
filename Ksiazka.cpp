#include <iostream>
#include "Ksiazka.h"
#include <stdlib.h>
//#include "Punkt.h"

using namespace std;

Ksiazka::Ksiazka(string s, int a) : NaStanie(s)
{
	ileStron=a;
}

Ksiazka::Ksiazka() : NaStanie() 
{
	ileStron=0;
}

Ksiazka::~Ksiazka() 
{

}

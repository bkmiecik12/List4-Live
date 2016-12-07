#include <iostream>
#include <typeinfo>
#include "Klient.h"
#include "NaStanie.h"
#include "Ksiazka.h"
#include "DVD.h"
#include <stdlib.h>
//#include "Punkt.h"

using namespace std;

Klient::Klient() 
{
}


Klient::~Klient() 
{
}

int Klient::ilePrzeczytal()
{
	int suma=0;
	for(int i=0;i<historia.size();i++)
	{		
			NaStanie *ns = this->historia[i];
			if(Ksiazka* k = dynamic_cast<Ksiazka*>(ns))
				suma+=k->ileStron;
	}	
	return suma;
}

int Klient::ileObejrzal()
{
	int suma=0;
	for(int i=0;i<historia.size();i++)
	{		
			NaStanie *ns = this->historia[i];
			if(DVD* k = dynamic_cast<DVD*>(ns))
				suma+=k->jakDlugo;
	}	
	return suma;
}
void Klient::operator+(NaStanie* x)
{
	historia.push_back(x);
}


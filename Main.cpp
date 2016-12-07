#include <iostream>
#include "NaStanie.h"
#include "Ksiazka.h"
#include "DVD.h"
#include "Klient.h"
#include "Biblioteka.h"

using namespace std;

int main()
{
	Ksiazka* k1= new Ksiazka("aaa",10);
	DVD* d1 = new DVD("BBB",30);
	Klient staszek;
	staszek+k1;
	staszek+d1;
	//staszek.display(new Ksiazka());
	cout<<"Przeczytal: "<<staszek.ilePrzeczytal()<<endl;
	cout<<"Obejrzal: "<<staszek.ileObejrzal()<<endl;
}

#include <iostream>
#include "DVD.h"
#include <stdlib.h>
//#include "Punkt.h"

using namespace std;

DVD::DVD(string s, int a) : NaStanie(s)
{
	jakDlugo=a;
}

DVD::DVD() : NaStanie() 
{
	jakDlugo=0;
}

DVD::~DVD() 
{

}

/*
 * Element.cpp
 *
 *  Created on: May 22, 2016
 *      Author: Isrhael De Jesús Reyes
 */

#include "Element.h"
#include <cstdlib>
using namespace std;

Element::Element(string name): _next(NULL), _name(name)
{

}

void Element::setNext(Element* element)
{
	_next = element;
}

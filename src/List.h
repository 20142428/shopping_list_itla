/*
 * List.h
 *
 *  Created on: May 22, 2016
 *      Author: Isrhael De Jesús Reyes
 */

#ifndef LIST_H_
#define LIST_H_
#include "Element.h"
class List
{
	public:
		List();
		void add(Element* element);
		void remove(int index);// remove the element of index specify by parameter, this method use also the method getOneElement(int index) see below 
		Element* getFirst(){ return _first;	}//return the first Element* '_first'
		Element* getLast(){ return _last; }//return the last Element* '_last'
		Element* getOneElement(int index);// recive an index type int and return an Element* of the list in the index specify by parameter
	private:
		Element* _first;
		Element* _last;
};

#endif /* LIST_H_ */

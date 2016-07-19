/*
 * Element.h
 *
 *  Created on: May 22, 2016
 *      Author: Isrhael De Jesús Reyes
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	public:
		Element(std::string name);
        std::string getName(){ return _name;  };// return the name of the element
        Element* getNext(){ return _next;  }// return the next element of type Element* saved in the property '_next'
        void setNext(Element* element);// set the property '_next' 
        
	private:
		Element* _next;
		std::string _name;
		//This means that List can access to all private members of this class
		friend class List;
};

#endif /* ELEMENT_H_ */

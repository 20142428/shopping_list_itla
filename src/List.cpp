/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: Isrhael De Jesús Reyes
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	//TODO: Implement this method
	//cout << "You should write the code for adding " << element -> _name << endl;

 if(element!=NULL)
	   {  
	   		if(_first==NULL)
			   {
			   	  _first = element;
			   	  _last = element;
			   	  cout<<"\n    First element '"<<_first->getName()<<"' inserted successfull."<<endl<<endl;
	   		   }else
				{
	   		   	  _last -> _next = element;
	   		   	  _last = element;
	   		   	  cout<<"\n    Element '"<<_last->getName()<<"' inserted successfull."<<endl<<endl;;
	   		   }
	   	
	   }
}//end of method add

void List::remove(int index)
{
	//TODO: Implement this method
//	cout << "You should write the code for removing the index " << index << endl;

 Element* i = _first;
	  if(i!=NULL)
	  {
	  	
	  	if(index==1)//if  first is going to remove
			{
				cout<<"\n  Element '"<<_first->getName()<<"' removed sucessfull."<<endl<<endl;
				_first = _first->getNext();
				return ;
			} 
			
	  	for(int y=1; i!=NULL && y<=index; y++, i= i->getNext())
		{		    
			if(y==index)
			{   Element* e_before = getOneElement(index-1);
				Element* e_toRemove = i;
				Element* e_next = e_toRemove->getNext();
				
				e_before->setNext(e_next);
				cout<<"\n  Element '"<<e_toRemove->getName()<<"' removed sucessfull."<<endl<<endl;
				break;
			}
			
		}//end of bucle for
		
	cout<<"\n   Invalid posicion, try again."<<endl<<endl;
	  	
	  }else
	  {
	  		cout<<"\n    List of product empty. It Can't remove."<<endl<<endl;
	  } 
	    
}// end of method remove

Element* List::getOneElement(int index)
{
	Element* i = _first;
	
	if(i!=NULL){//if isset(the first) gohead
		 
		 if(index==1)
		 {
		 	return i;
		 }
		 
		  for(int x=1; i!=NULL; x++, i=i->getNext())
		  {
		  	  if(index==x)
				{
					return i;
		  	    }
		  }	 
	}
	
	return NULL;
}//end of method getOneElement(int index)

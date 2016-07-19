/*
 * Menu.cpp
 *
 *  Created on: May 22, 2016
 *      Author: Isrhael De Jesús Reyes
 */

#include "Menu.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

Menu::Menu()
{

}
List* myList = new List(); // this is the genearl list;
void Menu::clearScreen()
{
	#ifdef _WIN32
	system("cls");
	#else
	system("clear");
	#endif
}

void Menu::pause()
{
	#ifdef _WIN32
	system("pause");
	#else
	system("read -n1 -r -p \"Press any key to continue...\" key");
	#endif
}


bool Menu::validate(int option)
{
	if(option >= 1 && option <= 4)
	{
		return true;
	}else
	{
		cout << "Please pick an option between 1 and 4"<< endl;
		pause();
		return false;
	}
}

void Menu::routeAction(int option)
{
	switch(option)
	{
	case 1:
		listItems();
		break;
	case 2:
		addItems();
		break;
	case 3:
		removeItems();
		break;
	case 4:
		cout << "Thanks for using our software, good bye!" << endl;
	}
	pause();
}

void Menu::listItems()
{
	//TODO: Implement this
	//cout << "Implement  Menu::listItems" << endl;
	Element* i = myList->getFirst();
	
	if( i != NULL)
	{// if the the list is no empty 
		cout<<"\n       All products: "<<endl;
		
		for(int x =1; i!=NULL; x++ , i = i->getNext()){
			cout<<"  "<<x<<". "<<i->getName()<<endl;
		}
	  cout<<endl;
	  
	}else
	{// if the list is empty display this message
		cout<<"\n    List of product empty."<<endl<<endl;
	}	
}//end of method listItems()

void Menu::addItems()
{
	//TODO: Implement this
	//cout << "Implement  Menu::addItems" << endl;
	string nameProduct = "";
	string count ="";
	string nameProductFull = "";
 cout<<"\n  Entry the product name add to  list: ";
 cin>>nameProduct;
 cout<<"\n  Entry the count of the product: ";
 cin>>count;
 nameProductFull = nameProduct+" "+count;
	 if(nameProduct != "")
	 {
	 	Element* newElement = new Element(nameProductFull);
	 	myList->add(newElement);
     }
 
}// end of method addItems()

void Menu::removeItems()
{
	//TODO: Implement this
	//cout << "Implement  Menu::removeItems" << endl;
	int index = NULL;
	listItems();
	cout<<"\n  Entry the number of product to remove: ";
	cin>>index;
	myList->remove(index);
	
}//end of method removeItems()

void Menu::show()
{
	int option;
	do
	{
		clearScreen();
		cout << "ITLA Shopping List By IDR" << endl;
		cout << "1- List items" << endl;
		cout << "2- Add Item" << endl;
		cout << "3- Remove Item" << endl;
		cout << "4- Exit" << endl;
		cout << "Select an option => ";
		cin >> option;
		if(validate(option))
		{
			routeAction(option);
		}
	}while(option !=4);
}

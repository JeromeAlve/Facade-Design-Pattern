#include "Transportation.h"
#include <ctime> 
#include <cstdlib> 

using namespace std;

//Types  1 - bus, 2 - airplane, 3 - train

Transportation::Transportation(int type_): type{type_}{}


void Transportation::printTransport(){
	srand((unsigned)time(0)); 
    int random_integer = rand() % 3; //random number for indexing airline/bus companies list
    int depart1 = (rand() % 11) + 1; //random times of arrival and departure
    int depart2 = (rand() % 11) + 1;
    int return1 = (rand() % 11) + 1;
    int return2 = (rand() % 11) + 1;

    cout << "Transportation: ";
    if(type == 1){
    	cout << "Bus - " << buses[random_integer]<<endl;
    }
    if(type == 2){
    	cout << "Flight - " << airlines[random_integer]<<endl;
    }
    if(type == 3){
    	cout << "Train - Via Rail"<<endl;
    }

    cout << "Departure:     Depart: " << depart1 << ":00am     Arrive: " << depart2 << ":00pm" << endl; 
    cout << "Return:     Depart: " << return1 << ":00am     Arrive: " << return2 << ":00pm" << endl; 
}

bool Transportation::isValidType(int type_){ 
	return (type_ < 4 && type_ > 0); //valid types 1-3
}
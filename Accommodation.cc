#include "Accommodation.h"

using namespace std;

//Types  1 , 2 , 3 , 4

Accommodation::Accommodation(int type_, int beds_): type{type_}, beds{beds_}{}


void Accommodation::printTypes(){
    int a =1;
    for(vector<string>::const_iterator i = typeStay.begin(); i != typeStay.end(); ++i) {
        cout<< a << " - " << *i << endl; // this will print all the contents of typestay
        a++;
    }
}

void Accommodation::printAcc(){
    cout<< "Room Type: " << typeStay[type-1] << "  (" << beds << " Beds)" << endl;
}

bool Accommodation::isValidType(int type_){ 
	return (type_ < 5 && type_ > 0); //valid types 1-4
}
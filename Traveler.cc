#include "Traveler.h"
#include <stdlib.h>  
using namespace std;


Traveler::Traveler(string name_, int age_, string city_, string depart_, string return_)
: name{name_}, age{age_}, city{city_}, departureDate{depart_}, returnDate{return_}{}

void Traveler::printCities(){
	for(vector<string>::const_iterator i = Traveler::cities.begin(); i != Traveler::cities.end(); ++i) {
    	cout << *i << " "; // this will print all the contents of Traveler::cities
	}
}

void Traveler::printInfo(){
	cout<< "Traveler's Information:"<< endl;
	cout<< "Name: " << name << "         Age: " << age << endl;
	cout<< "Departing from: " << city << endl;
	cout<< "Departure Date: "<< departureDate << "          Return Date: " << returnDate << endl;
}

bool Traveler::isValidDate(string depart_, string return_){
	vector<int> departures; // [0] - month , [1] - day, [2] - year
	vector<int> returns;
	int x=0;
	int y =0;
	for(int i = 0; i<5 ; i+=2){
		x = atoi(depart_.substr(i,2).c_str());
		y = atoi(return_.substr(i,2).c_str());
		departures.push_back(x);
		returns.push_back(y);
	}

	if(departures[2] > returns[2]){ return false; } // depart year cannot be greater than arrival year
	if(departures[2] < returns[2]){ return true; }
	if(departures[0] < returns[0]){ return true; } // departure must be less than return
	if(departures[0] == returns[0] && departures[1] < returns[1]){return true;}
	return false;
}

bool Traveler::isValidCity(string city_){
	return (std::find(Traveler::cities.begin(), Traveler::cities.end(), city_) != Traveler::cities.end());
}

string Traveler::getReturn(){ return returnDate;} //accessor methods
string Traveler::getDeparture(){ return departureDate;}
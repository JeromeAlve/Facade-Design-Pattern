
// header file for Traveler class
#ifndef TRAVELER_H
#define TRAVELER_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Traveler{
	public:
		Traveler(std::string name_, int age_, std::string city_, std::string depart_, std::string return_); 
		~Traveler();
		void printInfo();
		void printCities();
		bool isValidDate(std::string depart_, std::string return_); //checks if dates entered are valid
		bool isValidCity(std::string city_); //check if city entered is valid
		std::string getReturn(); //accessor methods
		std::string getDeparture();

	private:
		std::string name;
		int age;
		std::string city; 
		std::string returnDate; //Dates are in format MMDDYY
		std::string departureDate;
		std::vector<std::string>cities = {"Toronto", "Montreal", "Ottawa", "Waterloo", "Vancouver", "Calgary", "Halifax"};; //list of valid cities

};
#endif
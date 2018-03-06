
// header file for Transportation class
#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


class Transportation{
	public:
		Transportation(int type_); 
		~Transportation();
		void printTransport(); //print transportation info
		bool isValidType(int type_); //checks if type of transportation is valid

	private:
		int type; //type of transportation
		std::vector<std::string> buses = {"Megabus", "Greyhound", "JTransit", "Jerome's Bus"}; //list of bus companies
		std::vector<std::string> airlines = {"Air Canada", "American Airlines", "WestJet", "Air Jerome"}; //list of airline companies
};
#endif
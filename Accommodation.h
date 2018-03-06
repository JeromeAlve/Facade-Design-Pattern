
// header file for Accommodation class
#ifndef ACCOMMODATION_H
#define ACCOMMODATION_H

#include <iostream>
#include <vector>
#include <string>

class Accommodation{
	public:
		Accommodation(int type_, int beds_); 
		~Accommodation();
		void printAcc();
		void printTypes();
		bool isValidType(int type_); //checks if type of Accommodation is valid

	private:
		int type;
		int beds;
		std::vector<std::string> typeStay = {"First Class Suite", "Penthouse", "Mountain View", "Lake View"};
};
#endif
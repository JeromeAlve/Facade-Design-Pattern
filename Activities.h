
// header file for Activities class
#ifndef ACTIVITIES_H
#define ACTIVITIES_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Activities{
	public:
		Activities(); 
		~Activities();
		void printActivities(); //prints the list of selected activities
		void printTypes(); // prints the list of activities
		void add(int); //adds an acitivity to the selected activities list
		bool isValidType(int); //checks if type of activity is valid

	private:
		std::vector<int> selectList; // list of selected activities
		std::vector<std::string> list = {"Skiing", "Snowboarding", "Snowshoeing", "Ice fishing", "Dogsledding", "Spa"}; //list of activities
};
#endif
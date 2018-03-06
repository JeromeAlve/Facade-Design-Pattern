#include <iostream>
#include <algorithm>
#include "Traveler.h"
#include "Transportation.h"
#include "Accommodation.h"
#include "Activities.h"

using namespace std;

class Facade
{
	Traveler * traveler_;
	Transportation *transportation_;
    Accommodation *accommodation_;
    Activities *activities_;
    
public:
    Facade() // create itinerary by inititalizing the objects above
    {
    	Traveler * dummy1 = new Traveler("",0,"","",""); //dummy variable for validating dates and city
    	Transportation * dummy2 = new Transportation(0);
    	Accommodation * dummy3 = new Accommodation(0,0);

    	//Collect values for Traveler's information
    	string name_; int age_; string city_; string depart_; string return_;
    	cout << "Create your vacation itinerary for Cypress Mountain Ski Resort:" << endl;
    	cout << "Please enter the traveler's name (use a '-' instead of spaces): ";
    	cin >> name_;
    	cout << "Please enter the traveler's age: ";
    	cin >> age_;
    	cout << "Please pick the city of departure: ";
    	dummy1->printCities();
    	cout<< endl << "Enter a city: ";
    	cin >> city_;
    	while(!dummy1->isValidCity(city_)){ 
    		cout<< "Please enter a valid city: ";
    		cin >> city_;
    	}
    	cout << "Please enter the date of departure MMDDYY: ";
    	cin >> depart_;
    	cout << "Please enter the date of return MMDDYY: ";
    	cin >> return_;
    	while(!dummy1->isValidDate(depart_, return_)){ 
    		cout<< "Please enter a valid return date MMDDYY: ";
    		cin >> return_;
    	}

    	traveler_ = new Traveler(name_, age_, city_, depart_, return_); //create Traveler object

    	//Collect values for Transportation object
    	int transType=0;

    	cout << "Please enter the type of transportation: 1 - Bus , 2 - Airplane, 3 - Train"<< endl;
    	cin>> transType;
    	while(!dummy2->isValidType(transType)){ 
    		cout<< "Please enter a valid number:" << endl;
    		cin >> transType;
    	}

    	transportation_ = new Transportation(transType); // create Transportation object

    	//Collect info for Accommodations
    	int accType = 0;
    	int bedNum = 0;
    	cout<< "Choose accommodation: " << endl;
    	dummy3->printTypes();
    	cout<< "Enter a number: ";
    	cin>> accType;
    	while(!dummy3->isValidType(accType)){ 
    		cout<< "Please enter a valid number:" << endl;
    		cin >> accType;
    	}

    	cout<< "Please enter the number of beds: ";
    	cin >> bedNum;

    	accommodation_ = new Accommodation(accType, bedNum); //create Accommodation object
    	activities_ = new Activities();
    	cout<< "Please choose different available activities: "<<endl;
    	activities_-> printTypes();
    	cout << "Enter numbers: " << endl;

    	int act = 0;
    	while(cin>>act){
    		if(activities_->isValidType(act)){
    			activities_->add(act);
    		}
    		else{cout<<"Please enter a valid number:" << endl;}
    	}
    }

    // print itinerary
    void print()
    {
     	cout<< endl << endl;
     	cout << " CYPRESS MOUNTAIN SKI RESORT ITINERARY " << endl;
     	traveler_ -> printInfo();
     	transportation_ -> printTransport();
     	accommodation_ -> printAcc();
     	activities_-> printActivities();
    }
};

int main()
{
    Facade * facade = new Facade();
    facade->print();
    delete facade;

}
#include "Activities.h"
#include <algorithm>
using namespace std;

//Types  1 , 2 , 3 , 4

Activities::Activities(){}


void Activities::printTypes(){
	cout<< "Select from the list of activities: "<< endl;
    int a =1;
    for(vector<string>::const_iterator i = list.begin(); i != list.end(); ++i) {
        cout<< a << " - " << *i << endl; // this will print all the activities
        a++;
    }
}

void Activities::printActivities(){
	cout<< "Activities List:" << endl;
    for(vector<int>::const_iterator i = selectList.begin(); i != selectList.end(); ++i) {
    	cout<< list[*i - 1] << endl;
    }
}

void Activities::add(int a){
	if(!(std::find(selectList.begin(), selectList.end(), a) != selectList.end())){
   		selectList.push_back(a);
	}
}

bool Activities::isValidType(int type_){ 
	return (type_ < 7 && type_ > 0); //valid types 1-4
}
#include <iostream>
#include <ctime>
#include <string>
#include <stdio.h>
#include "count.h"

using namespace std; 

 int countUp(string stopCount) {
	time_t rawtime;
	struct tm * currentTime;
	string blue;
	string hours_seconds;
	string prev_hours_seconds = " ";
	
	while(1){
	time ( & rawtime);
	currentTime = localtime(&rawtime);
	blue = asctime(currentTime);
	hours_seconds  = blue.substr(11,8);
	if(hours_seconds != prev_hours_seconds && hours_seconds != stopCount){
		prev_hours_seconds = hours_seconds;
		cout << hours_seconds << endl;
	
	}
	}

//cout <<  "The time to count to is now " << stopCount << endl;
return 0;
}

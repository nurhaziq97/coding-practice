#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
	string A = s.substr(8, 10);
    int hour = stoi(s.substr(0,2));
    string minSec = s.substr(2,6);
    if(A=="PM") {
        if(hour != 12) {
            hour = hour + 12;
        }
    }else {
        if(hour == 12) {
            hour = 0;
        }
    }
    string Shour;
    if(hour == 0) {
        Shour = "00";
    }else {
	    if(hour < 10) {
		    Shour = "0"+to_string(hour);
	    }else {
        	Shour = to_string(hour);
	    }
    }
    return Shour+minSec;
}

int main () {
	string s; 
	getline(cin, s);
	string result = timeConversion(s);
	cout << result <<endl;
	return 0;
}

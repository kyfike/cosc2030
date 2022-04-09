// Fig. 9.6: Time.cpp
// Member-function definitions for class Time.
#include <iomanip>
#include <stdexcept>
#include <sstream> // ostringstream
#include <string>
#include <ctime> // access time() and localtime().
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second) {
    //setTime(hour, minute, second); // validate and set time

    // PROVING THE DEFAULT CONSTRUCTOR CAPABILITY TO USE TIME AND LOCALTIME FUNCTIONS
    hour = (tmLocal->tm_hour);
    minute = (tmLocal->tm_min);
    second = (tmLocal->tm_sec);
    setTime(hour, minute, second);
}

// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
    setHour(h); // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
}

// set hour value
void Time::setHour(int h) {
    if (h >= 0 && h < 24) {
        hour = h;
    }
    else {
        throw invalid_argument ("hour must be 0-23");
    }
}

// set minute value
void Time::setMinute(int m) { 
    if (m >= 0 && m < 60) {
        minute = m;
    }
    else {
        throw invalid_argument("minute must be 0-59");
    }
}

// set second value
void Time::setSecond(int s) {
    if (s >= 0 && s < 60) {
        second = s;
    }
    else {
        throw invalid_argument("second must be 0-59");
    }
}

//THESE ARE THE ORIGINAL FUNCTIONS
// return hour value
unsigned int Time::getHour() const {return hour;}

// return minute value
unsigned Time::getMinute() const {return minute;}

// return second value
unsigned Time::getSecond() const {return second;}


/* THESE ARE THE FUNCTIONS FOR EXERCISE 9.04
// return hour value
unsigned int Time::getHour() const {return (tmLocal->tm_hour);}

// return minute value
unsigned Time::getMinute() const {return (tmLocal->tm_min);}

// return second value
unsigned Time::getSecond() const {return (tmLocal->tm_sec);}
*/
// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const {  
    ostringstream output;
    output << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond();
    return output.str();
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const {
    ostringstream output;
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
        << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
        << getSecond() << (hour < 12 ? " AM" : " PM");
    return output.str(); 
}
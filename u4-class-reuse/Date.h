// Fig 9.14
// Date class declaration. Memeber funcions are defined in Date.cpp.
#include <string>

// prevent multiple inclusions of header
#ifndef DATE_H
#define DATE_H

// class Date definition
class Date {
public:
    explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 2000);
    std::string toString() const;
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif
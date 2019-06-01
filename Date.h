// Class name:  Date
// Written by:  Ale Chaito and Matheus Franscisco
// For:         Federal University Of Santa Catarina - Programming Language 2
// Purpose:     Objects of this class type will keep track of the
//              month, day and year of a Date value. The program
//              which uses this class can declare and initialize
//              Date objects, change a date or print a Date in
//              the form d/m/y.
// Member functions:
//              Date(int = 1, int = 1, int = 2000)
//                 This constructor function will accept from the
//                 calling program initial values for day, month,
//                 year, in this order. Or it will assign the default
//                 date of 1/1/2000. Will check for valid values.
//              setdate(int, int, int)
//                 This function will assign new integer values of
//                 the day, month and year of the date. The
//                 parameters represent the new values to be
//                 assigned in order of day, month, year. Will
//                 check for valid values.
//              setDay(int)
//                 Inserts an integer value belonging to the range
//                 allowed for the object. Will check for valid values.
//              setMonth(int)
//                 Inserts an integer value belonging to the range
//                 allowed for the object. Will check for valid values.
//              setYear(int)
//                 Inserts an integer value belonging to the range
//                 allowed for the object. Will check for valid values.
//              printDate()
//                 This function will display the date in format
//                 of d/m/y when called from a client program.
// Member data:
//              day
//                 integer variable representing day value 1-31
//              month
//                 integer variable representing month value 1-12
//              year
//                 integer variable representing year value 1000-9999
//                 (4-digit number)
//
#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;

public:
    //construtor
    Date(int day = 1, int month = 1, int year = 2000);

    //metodos get
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    //metodos set

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    void setDate(int d, int m, int y);

    //outros metodos
    void printDate() const;
};

#endif

// Class name:  Functions for class date
// Written by:  Ale Chaito and Matheus Francisco
#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date(int d, int m, int y){
    setDay(d);
    setMonth(m);
    setYear(y);
}
//Get Methods
int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}
//Set Methods
void Date::setDay(int d){
    while(d <= 0 || d > 31){
        cout<<"Enter the day, in between 1,31:"<<endl;
        cin>>d;
    }
    day = d;
}
void Date::setMonth(int m){
    while(m <= 0 || m > 12){
        cout<<"Enter the month, in between 1,12:"<<endl;
        cin>>m;
    }
    month = m;
}
void Date::setYear(int y){
    while(y < 1000 || y > 9999){
        cout<<"Enter the year, with 4 digits:"<<endl;
        cin>>y;
    }
    year = y;
}
void Date::setDate(int d, int m, int y){
    setDay(d);
    setMonth(m);
    setYear(y);
}
//Other Methods
void Date::printDate() const{
    cout<< setfill('0');
    cout<<setw(2)<<day<<"/"<<setw(2)<<month<<"/"<<setw(2)<<year<<endl;
}




#include <iostream>
#include "Date.h"
#define EXIT 0
#define SETDATE 1
#define PRINT 2

using namespace std;

int main()
{
    Date d1;
    int menu = 1;
    int day  = 0;
    int month = 0;
    int year = 0;
    while (menu != 0) {
        cout<<
        "-----------------------------------------------\n"
        "Welcome to Date Management - Choose one option:\n"
        "-----------------------------------------------\n"
        "1 - Enter a date to store. \n"
        "2 - Show the data stored on the date. \n"
        "---------------------\n"
        "0 - QUIT PROGRAM.\n"
        "---------------------"<<endl;
        cin>>menu;
        switch (menu){
            case EXIT:
                cout<<"You left the program successfully."<<endl;
            break;
            case SETDATE:
                cout<<"Set the day value of date:"<<endl;
                cin>>day;
                d1.setDay(day);
                cout<<"Set the month value of date:"<<endl;
                cin>>month;
                d1.setMonth(month);
                cout<<"Set the year of date:"<<endl;
                cin>>year;
                d1.setYear(year);
            break;
            case PRINT:
                d1.printDate();
            break;
            default:
                cout<<"This option dont exist."<<endl;
            break;
            }
    }

    return 0;
}

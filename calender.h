#ifndef _CALENDER_H_
#define _CALENDER_H_


class calender{
    public:
    /*
     *  initialize the month and year for display
     *   precondition: month is the range 1 to 12 and year
     *   is 1900 or later
     */
    calender(unsigned  int m = 1, unsigned int y = 1900);



    /*
     *  display the calender with a header and a table of dates
     *
     */

    void displayCalendar() const;


    // returns the month
    unsigned int getMonth() const;

    // return year
    unsigned int getYear() const;
    void setMonth(unsigned int);
    void setYear(unsigned int);

private:
    unsigned int year;
    unsigned int month;

};























#endif
/**
  * @File:     date.h
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Methods - Helpers functions
  */

#include <iostream>


#ifndef DATE_H
#define DATE_H

namespace date {
   class Date {
   public:
      Date(int year, int month);
      int month() const;
      int year() const;

   private:
      int _year;
      int _month;

   };

   bool isDate(int year, int month);



   std::ostream& operator<<(std::ostream& os, const Date& date);

} // date

#endif // DATE_H

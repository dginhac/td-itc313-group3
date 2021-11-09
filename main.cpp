/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>

#include "date.h"
#include "cb.h"



int main(int argc, char const *argv[]) {

   bank::CB cb1(1234'5678'1234'5678, date::Date(2023,4), 123, bank::Card::mastercard,"Dom Ginhac");
   bank::CB cb2(1234'5678'1234'5678, date::Date(2023,4), 123, bank::Card::mastercard,"Dom Ginhac");
   bank::CB cb3(1234'5678'1234'5678, date::Date(2023,4), 123, bank::Card::mastercard,"Dom Ginhac");

   std::cout << cb1 << std::endl;

   std::cout << "Bye." << std::endl;
   std::cout << "Bye 2." << std::endl;
   std::cout << "Bye 3." << std::endl;
   std::cout << "Bye 4." << std::endl;
   date::Date d1(2023,4);
   std::cout << d1.toString()  << std::endl;
   return 0;
}

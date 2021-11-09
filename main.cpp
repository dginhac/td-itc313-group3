/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   12 oct. 2021 - 08h43
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A - TD1 Gr1
 */

#include <iostream>

#include "date.h"
#include "cb.h"
#include "customer.h"
#include "address.h"


int main(int argc, char const *argv[]) {

   std::cout << "Hello world." << std::endl;
   bank::CB cb1(1234'5678'1234'5678, date::Date(2023,4), 123, bank::Card::mastercard,"Dom Ginhac");
   std::cout << cb1 << std::endl;


   people::Address ad1(12, "rue des dev", "Residence 42", 21000, "Dijon");
   people::Customer cu1(1, "Dom", "Ginhac", date::Date(1972,5), "tutu", "0601020304", "dginhac@u-bourgogne.fr", ad1);

   std::cout << cu1;
   std::cout << "Bye." << std::endl;
   return 0;
}

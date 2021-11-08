/**
  * File:     address.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Address
  */



#include "address.h"

namespace people {

    Address::Address(int nb, std::string street, std::string details,
              int zipcode, std::string city): _nb(nb), _street(street),
              _details(details), _zipcode(zipcode), _city(city) {}
    int Address::nb() const {
      return _nb;
    }

    std::string Address::street() const {
      return _street;
    }
    std::string Address::details() const {
      return _details;
    }
    int Address::zipcode() const {
      return _zipcode;
    }
    std::string Address::city() const {
      return _city;
    }

    std::ostream& operator<<(std::ostream& os, const Address& address) {
      os << std::to_string(address.nb()) << ", " << address.street() << std::endl;
      std::string details = address.details();
      if (details.length()!=0)
        os << address.details() << std::endl;
      os << std::to_string(address.zipcode()) << " " << address.city() << std::endl;

      return os;
    }
}
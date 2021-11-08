/**
  * File:     address.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Address class
  */


#include <string>
#include <iostream>

#ifndef ADDRESS_H
#define ADDRESS_H

namespace people {

  class Address {
  public:
    Address(int nb, std::string street, std::string details, int zipcode, std::string city);
    int nb() const;
    std::string street() const;
    std::string details() const;
    int zipcode() const;
    std::string city() const;
  private:
    int _nb;
    std::string _street;
    std::string _details;
    int _zipcode;
    std::string _city;

  };
  std::ostream& operator<<(std::ostream& os, const Address& address);
}


#endif // ADDRESS_H
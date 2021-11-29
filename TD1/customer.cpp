/**
  * File:     customer.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of customer
  */

#include "customer.h"

namespace people {

  Customer::Customer(int id, std::string firstname, std::string lastname, date::Date birthday, std::string password, std::string phone, std::string email, Address address) :
    _id(id), _firstname(firstname), _lastname(lastname), _birthday(birthday), _password(password), _phone(phone), _email(email), _address(address){}
  int Customer::id() const {
    return _id;
  }
  std::string Customer::firstname() const {
    return _firstname;
  }
  std::string Customer::lastname() const {
    return _lastname;
  }
  date::Date Customer::birthday() const{
    return _birthday;
  }
  std::string Customer::password() const{
    return "";
  }
  std::string Customer::phone() const{
    return _phone;
  }
  std::string Customer::email() const{
    return _email;
  }
  Address Customer::address() const{
    return _address;
  }

  std::ostream& operator<<(std::ostream& os, const Customer& c) {
    os << c.firstname() << " " << c.lastname() << "("
    << std::to_string(c.id()) << ") - " << c.birthday() << std::endl;
    os << c.address() << std::endl;
    os << c.phone() << " - " << c.email() << std::endl;
    return os;
  }
}

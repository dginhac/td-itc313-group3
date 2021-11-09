/**
  * File:     customer.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Customer
  */

#include <string>
#include <iostream>
#include "date.h"
#include "address.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H



namespace people {
    class Customer {
    public:
      Customer(int id, std::string firstname, std::string lastname, date::Date birthday, std::string password, std::string phone, std::string email, Address address);
      int id() const;
      std::string firstname() const;
      std::string lastname() const;
      date::Date birthday() const;
      std::string password() const;
      std::string phone() const;
      std::string email() const;
      Address address() const;
    private:
      int _id;
      std::string  _firstname;
      std::string _lastname;
      date::Date _birthday;
      std::string _password;
      std::string _phone;
      std::string _email;
      Address _address;
    };

    std::ostream& operator<<(std::ostream& os, const Customer& customer);
}

#endif // CUSTOMER_H

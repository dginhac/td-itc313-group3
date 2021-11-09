/**
  * File:     account.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Implementation of class Account
  */

#include "account.h"

namespace bank {

    Account::Account(int customer_id, double balance, std::string iban, CB cb, date::Date creation) : _customer_id(customer_id), _balance(balance), _iban(iban), _cb(cb), _creation(creation) {};

    int Account::customer_id () const {
        return _customer_id;
    }
    double Account::balance() const {
        return _balance;
    }
    std::string Account::iban() const {
        return _iban;
    }
    CB Account::cb() const {
        return _cb;
    }
    date::Date Account::creation() const {
        return _creation;
    }

    std::ostream& operator<< (std::ostream& os, const Account& a) {
        os << a.customer_id() << " - " << a.iban() << " - " << a.creation() << std::endl;
        os << a.cb() << std::endl;
        os << a.balance() << std::endl;
        return os;
     }
}
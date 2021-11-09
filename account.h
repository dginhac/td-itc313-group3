/**
  * File:     account.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of Account
  */

#include <string>
#include <iostream>
#include "cb.h"
#include "date.h"

#ifndef ACCOUNT_H
#define ACCOUNT_H

namespace bank {

    class Account {
    public:
        Account(int customer_id, double balance, std::string iban, CB cb, date::Date creation);
        int customer_id () const;
        double balance() const;
        std::string iban() const;
        CB cb() const;
        date::Date creation() const;
      private:
        int _customer_id;
        double _balance;
        std::string _iban;
        CB _cb;
        date::Date _creation;
    };

    std::ostream& operator<< (std::ostream& os, const Account& a);

} // bank


#endif // ACCOUNT_H

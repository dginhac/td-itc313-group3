/**
  * File:     cb.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Declaration of class CB
  */

#include <string>
#include <iostream>

#include "date.h"

#ifndef CB_H
#define CB_H

namespace bank {
    /*

* numero : long int
* date: Objet Date
* crypto : int
* nom client : string
* type : class enum
*/

enum class Card {
    mastercard, visa
};

class CB {

    public:
        CB(long int number, date::Date end, int crypto, Card card, std::string name);
        long int number() const;
        date::Date end() const;
        int crypto() const;
        std::string card() const;
        std::string name() const;

    private:
        long int _number;
        date::Date _end;
        int _crypto;
        Card _card;
        std::string _name;
};

std::ostream& operator<<(std::ostream& os, const CB& cb);

}


#endif // CB_H



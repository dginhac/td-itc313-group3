/*
* @File:    cb.cpp
* @Project: C++ Programming - ESIREM 3A
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2021-11-08 13:51:23
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-08 14:25:36
*/

#include "cb.h"

namespace bank {
    CB::CB(long int number, date::Date end, int crypto,
           Card card, std::string name) :
           _number(number), _end(end), _crypto(crypto),
           _card(card), _name(name) {
            assert("Crypto must be XYZ!" && crypto>=0 && crypto <=999);
            assert("Number must have 16 digits" && number > 1000'0000'0000'0000 && number < 1'0000'0000'0000'0000);
           }

    long int CB::number() const {
        return _number;
    }
    date::Date CB::end() const {
        return _end;
    }
    int CB::crypto() const {
        return _crypto;
    }
    std::string CB::card() const {
        std::string card_type;
        if (_card == Card::mastercard) {
            card_type = "Mastercard";
        }
        else if (_card == Card::visa) {
            card_type = "Visa";
        }
        else
            card_type = "unknown";
        return card_type;
    }
    std::string CB::name() const {
        return _name;
    }

    std::ostream& operator<<(std::ostream& os, const CB& cb) {
        os << "Carte " << cb.card() << " - " << cb.name() << std::endl;
        os << "N° " << cb.number() << " - " << cb.end() << " - " << cb.crypto() << std::endl;
        return os;
    }

}
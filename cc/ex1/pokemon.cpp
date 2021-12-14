/**
  * File:     pokemon.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Pokemon
  */

#include "pokemon.h"

Pokemon::Pokemon(std::string name, int pv) : _name(name), _pv(pv) {}

std::string Pokemon::name() const {
    return _name;
}

int Pokemon::pv() const {
    return _pv;
}

void Pokemon::update_pv(int pv) {
    _pv = pv;
}

bool Pokemon::fight(Pokemon& other) {
    if (*this < other) {
        _pv = _pv - 5;
        other.update_pv(other.pv()+5);
        return false;
    }
    else {
        _pv = _pv + 5;
        other.update_pv(other.pv()-5);
        return true;
    }
}

bool fight(Pokemon& p1, Pokemon &p2) {
    if (p1 < p2) {
        p1.update_pv(p1.pv()-5);
        p2.update_pv(p2.pv()+5);
        return false;
    }
    else {
        p1.update_pv(p1.pv()+5);
        p2.update_pv(p2.pv()-5);
        return true;
    }
}


bool operator< (const Pokemon& p1, const Pokemon& p2) {
    if (p1.pv() < p2.pv()) {
        return true;
    }
    else {
        return false;
    }
}





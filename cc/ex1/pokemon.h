/**
  * File:     pokemon.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Pokemon
  */

#include <string>

class Pokemon {
public:
    Pokemon(std::string name, int pv);
    int pv() const;
    void update_pv(int pv);
    std::string name() const;
    bool fight(Pokemon& other);

private:
    std::string _name;
    int _pv;
};

bool operator< (const Pokemon& p1,  const Pokemon& p2);
bool fight(Pokemon& p1, Pokemon& p2);
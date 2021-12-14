/**
  * File:     main.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  test
  */

#include <iostream>
#include "pokemon.h"

int main(int argc, char const *argv[])
{
    Pokemon salameche("Salameche", 70);
    Pokemon pikachu("Pikachu", 50);

    if (pikachu < salameche) {
        std::cout << "Pikachu a moins de PV que Salameche" << std::endl;
    }
    std::cout << "avant combat" << std::endl;
    std::cout << "pikachu : " << pikachu.pv() << std::endl;
    std::cout << "salameche : " << salameche.pv() << std::endl;

    fight(salameche,pikachu);
    std::cout << "\n apres combat" << std::endl;
    std::cout << "pikachu : " << pikachu.pv() << std::endl;
    std::cout << "salameche : " << salameche.pv() << std::endl;

    return 0;
}
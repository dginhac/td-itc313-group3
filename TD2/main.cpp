/**
  * File:     main.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  test code
  */
#include <iostream>
#include "todo.h"
#include "todolist.h"

int main(int argc, char const *argv[])
{
    int id = 1;
    Todo t1(id++,"Preparer cours UML", "Apprendre UML et en faire un cours");
    Todo t2(id++,"Ecrire cours Liste chainée", "Chercher des exemples applicatifs");
    Todo t3(id++,"Faire les courses", "Acheter à manger et à boire");
    Todo t4(id++,"Aller courir", "Pour éliminer les exces du WE");
    Todo t5(id++,"Réviser Exam C++", "Pendant les vacances");


    Todolist tl;

    tl.add(t1);
    tl.add(t5);
    tl.add(t3);
    tl.add(t4);
    tl.add(t2);

    std::cout << tl;

    tl.del(5);
    std::cout << std::endl << tl;

    std::cout << "ok" << std::endl;
    return 0;
}
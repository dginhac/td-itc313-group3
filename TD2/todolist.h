/**
  * File:     todolist.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Todolist
  */

/* La classe Todolist comprendra aussi le minimum d'informations nécessaires à l'application, à savoir un tableau de tâches.
*/

#include "todo.h"
#include <forward_list>
#include <vector>
#include <array>

#ifndef TODOLIST_H
#define TODOLIST_H

class Todolist {
public:
    Todolist();
    bool add(const Todo& todo);
    bool del(int id);
    friend std::ostream& operator<< (std::ostream& os, const Todolist& tl);
private:
    std::forward_list<Todo> _todos;
    std::vector<Todo> _todos2;
    int _nb;
    std::array<Todo, 100> _todos3;

};



#endif // TODOLIST_H

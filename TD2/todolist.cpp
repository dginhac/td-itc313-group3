/**
  * File:     todolist.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Todolist
  */

#include <iostream>
#include "todolist.h"

Todolist::Todolist() : _nb(0) {}

bool Todolist::add(const Todo& todo) {
    _todos.push_front(todo);

    _todos2.push_back(todo);

    if (_nb < 100) {
        _todos3.at(_nb++) = todo;
    }

    return true;
}

bool Todolist::del(int id) {
    _todos.remove_if([id](Todo todo){return todo.id() == id;});

    auto it = find_if(_todos2.begin(), _todos2.end(),
        [id](Todo todo){return todo.id() == id;});
    if (it != _todos2.end()) {
        _todos2.erase(it);
    }


        for (auto it = _todos3.begin(); (*it).id() != -1 ; ++it) {
            bool found = false;
            if ((*it).id() == id) {
                found = true;
            }

        }

    return true;
}

std::ostream& operator<< (std::ostream& os, const Todolist& tl) {
    os << "list: " << std::endl;
    for (auto it = tl._todos.begin(); it != tl._todos.end(); ++it) {
        os << *it;
    }
    os << "vector: " << std::endl;
    for (auto it = tl._todos2.begin(); it != tl._todos2.end(); ++it) {
        os << *it;
    }

    os << "array: " << std::endl;
    for (auto it = tl._todos3.begin(); (*it).id() != -1 ; ++it) {
        os << *it;
    }
    return os;
}
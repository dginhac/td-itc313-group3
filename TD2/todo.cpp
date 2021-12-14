/**
  * File:     todo.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Todo
  */
#include <iostream>
#include "todo.h"

Todo::Todo(int id, std::string title,
    std::string description, bool done) :
    _id(id), _title(title), _description(description), _done(done) {}



int Todo::id() const {
    return _id;
}

std::string Todo::title() const {
    return _title;
}

std::string Todo::description() const {
    return _description;
}

bool Todo::done() const {
    return _done;
}


std::ostream& operator<< (std::ostream& os, const Todo& t) {
    std::string text = t.done() ? "Done" : "Not done";

    os << t.id() << " - " << t.title() << " : " << text << std::endl;
    os << t.description() << std::endl;
    return os;
}
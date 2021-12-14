/**
  * File:     student.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Student
  */

#include "student.h"


Student::Student(std::string name, double mark) : _name(name), _mark(mark) {}
std::string Student::name() const {
    return _name;
}
double Student::mark() const {
    return _mark;
}

void Student::update_mark(double new_mark) {
    _mark = new_mark;
}

std::ostream& operator<< (std::ostream& os, Student s) {
    os << s.name() << " - " << s.mark() << std::endl;
    return os;
}



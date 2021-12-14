/**
  * File:     student.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Student
  */
#include <ostream>
#include <string>

class Student {
public:
    Student(std::string name, double mark);
    double mark() const;
    std::string name() const;
    void update_mark(double new_mark);
private:
    std::string _name;
    double _mark;
};

std::ostream& operator<< (std::ostream& os, Student s);


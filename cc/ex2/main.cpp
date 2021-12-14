/**
  * File:     main.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  test
  */

#include <iostream>
#include <vector>
#include "student.h"


std::ostream& operator<< (std::ostream& os, std::vector<Student> input) {
    for (auto student : input) {
        os << student;
    }
    return os;
}

double mean(const std::vector<Student>& students) {
    double m=0.0;
    /*
    for (auto student : students) {
        m+=student.mark();
    }
    */
    for (auto it=students.begin(); it<students.end(); ++it) {
        m+= (*it).mark();
    }
    m=m/students.size();
    return m;
}

std::vector<Student> update_mark(const std::vector<Student>& input, double diff) {
    std::vector<Student> output;
    for (auto s : input) {
        output.push_back(Student(s.name(), s.mark()-diff));
    }
    return output;
}

void update_mark2(std::vector<Student>& input, double diff) {
    /*for (Student& s : input) {
        s.update_mark(s.mark()-diff);
        }*/
    std::transform(input.begin(),
                   input.end(),
                   input.begin(),
                   [diff](Student& s)
                   {s.update_mark(s.mark()-diff); return s;});
}

void sort(std::vector<Student>& input) {
    std::sort(input.begin(), input.end(),
        [](Student s1, Student s2)
        {return s1.mark() < s2.mark();});
}

int main(int argc, char const *argv[])
{
    Student s1("S. Jobs", 14.5);
    Student s2("D. Ginhac", 16.5);
    Student s3("B. Gates", 8.0);
    Student s4("A. Turing", 20.0);
    Student s5("M. Zukerberg", 6.0);
    Student s6("E. Musk", 19.5);

    std::vector<Student> students;
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);
    students.push_back(s6);

    std::cout << students;

    double m = mean(students);
    std::cout << "moyenne = " << m << std::endl;

    std::vector<Student> new_students;
    new_students = update_mark(students, m-12.0);

    std::cout << new_students;
    double m_new = mean(new_students);
    std::cout << "moyenne nouvelle = " << m_new << std::endl;

    update_mark2(students, m-12.0);
    std::cout << students;
    std::cout << "moyenne = " << mean(students) << std::endl;

    sort(students);
    std::cout << students;


    return 0;
}
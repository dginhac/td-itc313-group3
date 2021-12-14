/**
  * File:     todo.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Todo
  */

/* La classe Todo comprendra le minimum d'informations nécessaires à l'application, à savoir un identifiant numérique, un titre, une description et un statut pour la tâche.*/

#include <string>

#ifndef TODO_H
#define TODO_H

class Todo {
public:
    Todo(int id=-1, std::string title="", std::string description="", bool done = false);

    int id() const;
    std::string title() const;
    std::string description() const;
    bool done() const;
private:
    int _id;
    std::string _title;
    std::string _description;
    bool _done;
};

std::ostream& operator<< (std::ostream& os, const Todo& t);

#endif // TODO_H
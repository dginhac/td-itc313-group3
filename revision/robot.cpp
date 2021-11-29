#include "robot.h"

#include <iostream>

Robot::Robot(double x, double y, int pw) : _x(x), _y(y), _powersupply(pw) {}

int Robot::powersupply() const {
    return _powersupply;
}

double Robot::x() const {
    return _x;
}
double Robot::y() const {
    return _y;
}

bool Robot::move(double dx, double dy) {
    if (_powersupply <= 0) {
        return false;
    }
    _x = _x + dx;
    _y = _y + dy;
    _powersupply--;
    return true;
}

std::string display(const Robot& robot) {
    std::string text;
    text = "Pw = " + std::to_string(robot.powersupply());
    text += " - x = " + std::to_string(robot.x()) + " - y = " + std::to_string(robot.y()) + "\n";
    return text;
}

std::ostream& operator<< (std::ostream& os,
                          const Robot& robot) {
    os << "Pw = " << robot.powersupply();
    os << " - x = " << robot.x() << " - y = " << robot.y() << std::endl;
    return os;

}
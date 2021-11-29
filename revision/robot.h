#include <iostream>
#include <string>

class Robot {
public:
    Robot(double x, double y, int pw = 100);
    int powersupply() const;
    double x() const;
    double y() const;
    bool move (double dx, double dy);

private:
    int _powersupply;
    double _x;
    double _y;
};

std::string display(const Robot& robot);

std::ostream& operator<< (std::ostream& os,
                          const Robot& robot);

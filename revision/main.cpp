#include <iostream>

#include "robot.h"

int main(int argc, char const *argv[])
{
    Robot r1(3.4, 7.8, 80);
    std::cout << r1 ;

    Robot r2(-5.4, 1.8, 90);
    std::cout << display(r2);

    while (r2.move(1.0, -1.0)) {
        std::cout << r2;
    }


    return 0;
}
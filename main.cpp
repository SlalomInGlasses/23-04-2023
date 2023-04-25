//
// Created by Maciek on 23.04.2023.
//

#include <iostream>
#include "rectangle.h"
#include "rectangle.cpp"

int main() {
    std::cout << "Lab3\n";

    Rectangle p1;
    Rectangle p2("koc", 1.4, 2.2);
    Rectangle p3("pulapka", -2, -3);


    std::cout << p1.ToString() << "\n";




    return 0;
}


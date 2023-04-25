//
// Created by student on 23.04.2023.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<string>

class Rectangle {
private:
    std::string name;
    double a, b;
    bool correct;
    double circuit, square;

    bool IsCorrect(double a, double b);
    void CalCircuit();
    void CalSquare();
public:
    Rectangle(std::string n = "?", double a=1, double b=2);
    ~Rectangle();
    bool IsCorrect();
    const std::string& TakeName();
    double RSquare();
    double RCirtuit();
    bool ChangeAB(double a, double b);

    std::string ToString();
};


#endif //UNTITLED_RECTANGLE_H



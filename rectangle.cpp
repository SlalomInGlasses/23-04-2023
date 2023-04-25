//
// Created by Maciek on 23.04.2023.
//

#include "rectangle.h"
#include <iostream>
#include <string>

bool Rectangle::IsCorrect(double a, double b) {
    if (a < 0 || b < 0) return false;

    return true;
}

void Rectangle::CalCircuit() {
    std::cout << "Obwod to: " << 2 * (bok1 + bok2);

}

void Rectangle::CalSquare() {
    std::cout << "Pole to: " << bok1 * bok2;

}

Rectangle::Rectangle(std::string n, double a1, double b1):name(n) {

    {
        correct = IsCorrect(a, b);

        if (correct) {
            a = a1;
            b = b1;
            CalSquare();
            CalCircuit();
        }
        a = b = square = circuit = 0;

    }
}

Rectangle::~Rectangle() {
    std::cout << "Prostokat: " << name << " znika\n";

}

bool Rectangle::IsCorrect() {
    return correct;
}

const std::string &Rectangle::TakeName() {
    return name;
}

double Rectangle::CalSquare() {
    return square;
}

double Rectangle::CalCircuit() {
    return circuit;
}

bool Rectangle::ChangeAB(double a, double b) {
    if (IsCorrect(a, b)) {
        correct = true;
        a = a1;
        b = b1;
        CalSquare();
        CalCircuit();
        return true;
    }
    return false;
}

std::string Rectangle::ToString() {
    std::string result = "";

    result = "Prostokat o nazwie: " + name + " bok1="
            + std::to_string(a) + " bok2=" + std::to_string(b);
    if(correct) result +=" obowd to: "+ std::to_string(circuit)+" pole to: "+
                         std::to_string(square);
    else result +=" Figura niepoprawna";
    return result;
}



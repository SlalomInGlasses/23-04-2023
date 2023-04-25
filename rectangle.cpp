//
// Created by Maciek on 23.04.2023.
//

#include "rectangle.h"
#include <iostream>
#include <string>

bool Rectangle::IsCorrect(double a1, double b1) {
    if (a1 < 0 || b1 < 0) return false;

    return true;
}

void Rectangle::CalCircuit() {
    std::cout << "Obwod to: " << 2 * (a + b);

}

void Rectangle::CalSquare() {
    std::cout << "Pole to: " << a * b;

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

double Rectangle::RSquare() {
    return square;
}

double Rectangle::RCirtuit() {
    return circuit;
}

bool Rectangle::ChangeAB(double a1, double b1) {
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

int bef(double a){
    int counter =0;
   std:: cout<<"\na="<<a;
    while(a>1){
        a=a/10;
        a++;
    }
    return counter;
}

int aft(double a){
    int counter =0;
    while(a!=int(a)){
        a=a*10;
        counter++;
    }
    return counter;

}

std::string bto_string(double a,int n){
  std::string result=std::to_string(a);
  result.resize(n);
  return result;

}

std::string Rectangle::ToString() {
    std::string result = "";

  int n=2+bef(a)+aft(a);
 std::cout<<"bef"<<bef(a);
  int n2=1+bef(b)+aft(b);




    result = "\n===========================\nProstokat o nazwie: " + name + " bok1="
           + bto_string(a,n) + " bok2=" + bto_string(b,n2);
           // + temp + " bok2=" + std::to_string(b);
    if(correct) result +="   obowd to: "+ std::to_string(circuit)+"   pole to: "+
                         std::to_string(square);
    else result +=" Figura niepoprawna";
    return result;
}



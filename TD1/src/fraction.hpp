#pragma once
#include <iostream>

struct Fraction
{
    unsigned int numerator;
    unsigned int denominator;

    void operator+=(Fraction const &f);
    void operator-=(Fraction const &f);
    void operator*=(Fraction const &f);
    void operator/=(Fraction const &f);

    float to_float();
    operator float() const;
};

std::ostream &operator<<(std::ostream &os, Fraction const &f);

Fraction operator+(Fraction f1, Fraction const &f2);
Fraction operator-(Fraction f1, Fraction const &f2);
Fraction operator*(Fraction f1, Fraction const &f2);
Fraction operator/(Fraction f1, Fraction const &f2);

bool operator==(Fraction const &f1, Fraction const &f2);
bool operator!=(Fraction const &f1, Fraction const &f2);

bool operator<(Fraction const &f1, Fraction const &f2);
bool operator<=(Fraction const &f1, Fraction const &f2);

bool operator>(Fraction const &f1, Fraction const &f2);
bool operator>=(Fraction const &f1, Fraction const &f2);

Fraction operator+(Fraction const &f, int const i);
Fraction operator+(int const i, Fraction const &f);

Fraction abs(Fraction const f);
double ceil(Fraction const f);
double floor(Fraction const f);
double round(Fraction const f);
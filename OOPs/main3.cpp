#include <iostream>
using namespace std;

class Fraction {
    int numerator, denominator;

public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void setNumerator(int n) {
        numerator = n;
    }

    void setDenominator(int m) {
        denominator = m;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }


    void printFraction() {
        cout << numerator << '/' << denominator << '\n';
    }

    void add(Fraction const &f2);

    void simplify();
};

void Fraction :: add(Fraction const &f2) {
    int nichewala = denominator * f2.denominator;
    int x = nichewala / denominator;
    int y = nichewala / f2.denominator;
    int uparwala = (x * numerator) + (y * f2.numerator);

    numerator = uparwala;
    denominator = nichewala;

    cout << numerator << "/" << denominator << '\n';

    simplify();
}

void Fraction :: simplify() {
    int gcd = 1;
    int limit = min(numerator, denominator);
    for(int i = 1; i <= limit; i++) {
        if(numerator % i == 0 && denominator % i == 0) {
            gcd = i;
        }
    }

    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

int main() {
    Fraction f1(2, 3);
    Fraction f2(4, 6);
    f1.add(f2);
    f1.printFraction();

    return 0;
}
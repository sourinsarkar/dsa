#include <iostream>
#include <string>

using namespace std;

class Product {
    int imei;

public:
    string category;
    string os;
    void display() {
        cout << category << '\n';
        cout << os << '\n'; 
        cout << imei << '\n';
    }
    
    void setIMEI(int input) {
        // cout << "Before setting imei" << '\n';
        // cout << imei << '\n';
        imei = input;
        // cout << "After setting imei" << '\n';
        cout << imei << '\n';
    }
    
    int getIMEI() {
        cout << "IMEI is" << '\n';  
        cout << imei << '\n';
        return imei;
    }

    Product(string category, string dos) {
        cout << this << '\n';
        this->category = category;
        os = dos;
    }
};
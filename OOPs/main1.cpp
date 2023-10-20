#include <iostream>
#include "class1.cpp"
#include <string>

using namespace std;

int main() 
{
    Product *p1;
    p1 = new Product("Apple", "Mac");

    // p1->category = "Phone";
    // p1->os = "Android";
    p1->setIMEI(23);
    p1->display();
    return 0;   
}
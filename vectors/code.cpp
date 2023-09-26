#include <iostream>
#include <vector>

int main()
{ 
    std::vector<int> v1;
    std::vector<int>* v2 = new std::vector<int>();

    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30);
    // v1.push_back(40);
    // v1.push_back(50);
    // v1.push_back(60);
    // v1.push_back(70);

    // std::cout << v1[0] << '\n';
    // std::cout << v1[1] << '\n';
    // std::cout << v1[2] << '\n';

    // v1[3] = 300;

    // std::cout << v1[3] << '\n';
    // std::cout << v1[4] << '\n';
    // std::cout << v1[5] << '\n';
    // std::cout << v1[6] << '\n';

    // std::cout << v1.at(3) << '\n';

    v2->push_back(33);
    v2->push_back(34);
    v2->push_back(35);
    // v2->push_back(36);
    // std::cout << (*v2).at(0) << '\n';
    // std::cout << v2->at(0) << '\n';

    std::cout << v2->capacity() << '\n';
    std::cout << v2->size() << '\n';

    for(int i = 0; i < v2->size(); i++)
    {
        std::cout << v2->at(i) << ' ';
    }
    std::cout << '\n';

    return 0;
}
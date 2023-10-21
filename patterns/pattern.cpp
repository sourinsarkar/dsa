#include <iostream>
using namespace std;

int main()
{

    // P-1

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // int i = 1;
    // int n = 5;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << j << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-2

    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1

    // int i = 1;
    // int n = 5;

    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << n - j + 1 << ' ';
    //         j++;
    //     }

    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-3

    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25

    // int i = 1, n = 5, count = 1;

    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << count << ' ';
    //         count++;
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-4

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // int i = 1, n = 5;

    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << '*' << ' ';
    //         j++;
    //     }

    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-5

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // int i = 1, n = 5;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << j << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-6

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // int i = 1, n = 5, count = 1;

    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         // cout << count << ' ';
    //         cout << i << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     // count++;
    //     i++;
    // }

    // -----------------------------------

    // P-7

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // int i = 1, n = 5;

    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << i - j + 1 << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    //  P-8

    // A A A A A
    // B B B B B
    // C C C C C
    // D D D D D
    // E E E E E

    // int i = 1;
    // int n = 5;

    // while(i <= 5) {
    //     int j = 1;
    //     while(j <= n) {
    //         char ch = 'A' + i - 1;
    //         cout << ch << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-9

    // A B C D E F
    // A B C D E F
    // A B C D E F
    // A B C D E F
    // A B C D E F

    // int i = 1, n = 5;
    // while (i <= n)
    //
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-10

    // A B C D E
    // F G H I J
    // K L M N O
    // P Q R S T
    // U V W X Y

    // int i = 1, n = 5;
    // char ch = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << ch << ' ';
    //         j++;
    //         ch += 1;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-11

    // 1 2 3 4 5
    // 2 3 4 5 6
    // 3 4 5 6 7
    // 4 5 6 7 8
    // 5 6 7 8 9

    // int i = 1, n = 5;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout << i + j - 1 << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-12

    // A B C D E
    // B C D E F
    // C D E F G
    // D E F G H
    // E F G H I

    // int i = 1, n = 5;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout << ch<< ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-13

    // A
    // B B
    // C C C
    // D D D D
    // E E E E E

    // int i = 1, n = 5;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char ch = 'A' + i - 1;
    //         cout << ch << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-14

    // A
    // B A
    // C B A
    // D C B A
    // E D C B A

    // int i = 1, n = 5;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         char ch = 'A' + i - j;
    //         cout << ch << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-15

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    // int i = 1, n = 5, count = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << count << ' ';
    //         count++;
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-16

    // A
    // B C
    // D E F
    // G H I J
    // K L M N O

    // int i = 1, n = 5;
    // char ch = 'A';
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= i) {
    //         cout << ch << ' ';
    //         j++;
    //         ch++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-17

    // E
    // D E
    // C D E
    // B C D E
    // A B C D E

    // int i = 1, n = 5;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + n - i;
    //     while (j <= i)
    //     {
    //         cout << ch << ' ';
    //         j++;
    //         ch += 1;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-18

    //     *
    //    **
    //   ***
    //  ****
    // *****

    // int i = 1, n = 5;
    // while(i <= n) {
    //     int space = n - i;
    //     while(space) {
    //         cout << ' ';
    //         space--;
    //     }

    //     int j = 1;
    //     while(j <= i) {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-19

    // Way-1
    // int i = 1, n = 5;
    // while(i <= n) {
    //     int stars = n - i;
    //     while(stars) {
    //         cout << '*';
    //         stars--;
    //     }

    //     cout << '\n';
    //     i++;
    // }

    // Way-2
    // int i = 1, n = 5;
    // while(i <= n) {
    //     int j = 1;
    //     int num = n - i + 1;
    //     while(j <= num) {
    //         cout << '*';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // -----------------------------------

    // P-20

    //     1
    //    121
    //   12321
    //  1234321
    // 123454321

    // int i = 1, n = 5;
    // while (i <= n)
    // {
    //     int spaces = n - i;
    //     while (spaces)
    //     {
    //         cout << ' ';
    //         spaces--;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }

    //     int start = i - 1;
    //     while (start)
    //     {
    //         cout << start;
    //         start--;
    //     }

    //     cout << '\n';
    //     i++;
    // }

    // ----------------------------------- Striver's -----------------------------------

    // P-21
    
    // * * * * * 
    // * * * * * 
    // * * * * * 
    // * * * * * 
    // * * * * *

    // Using While Loop

    // int i = 1, n = 5;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << '*' << ' ';
    //         j++;
    //     }
    //     cout << '\n';
    //     i++;
    // }

    // Uing For Loop

    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         cout << '*' << ' ';
    //     }
    //     cout << '\n';
    // }

    // Testing
    

    return 0;
}

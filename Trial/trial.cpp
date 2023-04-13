#include <iostream>
#include <math.h>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

// (1) Pattern ------------------------------------------

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;

//     while(i <= n) {
//         int j = 1;
//         while(j <= n) {
//             cout << i << ' ';
//             j = j + 1;
//         }
//         cout << '\n';

//         i = i + 1;
//     }

//     return 0;
// }

// (2) Pattern ------------------------------------------

// 1 2 3 4 5 //Ascending
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// 5 4 3 2 1 //Descending
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j <= n) {
//             cout << j << ' '; // for ascending order
//             cout << n - j + 1 << ' '; // for descending order
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }

//     return 0;
// }

// (3) Pattern ------------------------------------------

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << count << ' ';
//             count += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// (4) Pattern ------------------------------------------

// *
// * *
// * * *
// * * * *

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j <= i) {
//             cout << '*' << ' ';
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }

//     return 0;
// }

// (5) Pattern ------------------------------------------

// 1
// 1 2
// 1 2 3
// 1 2 3 4

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j <= i) {
//             cout << j << ' ';
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// (6) Pattern ------------------------------------------

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     int count = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j <= i) {
//             cout << count << ' ';
//             count += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// (7) Pattern ------------------------------------------

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// 1
// 2 1
// 3 2 1
// 4 3 2 1

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         int num = i;
//         while(j <= i) {
//             cout << num << ' ';
//             // num += 1; // for ascending
//             num -= 1; // for descending
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// 2nd Approach for the descending one

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j <= i) {
//             cout << i - j + 1 << ' '; // for exactly as the code is for
//             // cout << i - j + 1 << ' '; // descending on all rows from the value of 'N'
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// (8) Pattern ------------------------------------------

// a b c
// a b c
// a b c

// int main() {
//     int n;
//     cin >> n;

//     int i =1;
//     while(i <= n) {
//         int j = 1;
//         char x = 97;
//         while(j <= n) {
//             cout << x << ' ';
//             x += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }

//     return 0;
// }

// (9) Pattern ------------------------------------------

// a a a a
// b b b b
// c c c c
// d d d d

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char x = 'a' + i - 1;
//             cout << x << ' ';
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }

//     return 0;
// }

// (9) Pattern ------------------------------------------

// a
// a b
// a b c

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         char x = 'a';
//         while (j <= i)
//         {   cout << x << ' ';
//             x += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }

//     return 0;
// }

// (10) Pattern ------------------------------------------

// a b c d e
// f g h i j
// k l m n o
// p q r s t
// u v w x y

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;
//     char x = 'a';

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << x << ' ';
//             x += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }

//     return 0;
// }

// (11) Pattern ------------------------------------------

// 1 2 3 4 5
// 2 3 4 5 6
// 3 4 5 6 7
// 4 5 6 7 8
// 5 6 7 8 9

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         int num = i;
//         while(j <= n) {
//             cout << num << ' ';
//             num += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// (11) Pattern ------------------------------------------

// a
// b b
// c c c
// d d d d

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     while(i <= n) {
//         int j = 1;
//         while(j <= i) {
//             char x = 'a' + i - 1;
//             cout << x << ' ';
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// (12) Pattern ------------------------------------------

// a
// b c
// d e f
// g h i j

// int main() {
//     int n;
//     cin >> n;

//     int i = 1;
//     char x = 'a';

//     while(i <= n) {
//         int j = 1;
//         while(j <= i) {
//             cout << x << ' ';
//             x += 1;
//             j += 1;
//         }
//         cout << '\n';
//         i += 1;
//     }
//     return 0;
// }

// -------------------------------------------------------------------------

// int main() {
// int a = 2;
// a = ~a;
// cout << a;

// int a = 2, b = 5, res;
// cout << (a ^ b) << '\n';
// cout << (b >> a) << '\n';
// cout << a++ << '\n';
// cout << ++a << '\n';
// cout << a-- << '\n';
// cout << --a << '\n';
//     return 0;
// }

// -------------------------------------------------------------------------

// Fibonacci - Worst Case Approach ---------------------------------

// int main() {
//     int n;
//     cin >> n;

//     int a = 0;
//     int b = 1;

//     for(int i = 1; i <= n; i++) {
//         int next = a + b;
//         cout << next << ' ';

//         a = b;
//         b = next;
//     }

//     return 0;
// }

// Check if a number is a PRIME  ---------------------------------

// int main() {

//     int n;
//     cin >> n;

//     bool flag = 1;

//     for(int i = 2; i < n; i++) {
//         if(n % i == 0) {
//             flag = 0;
//             break;
//         }
//     }

//     if(flag == 0) cout << "Not Prime" << '\n';
//     else cout << "Prime" << '\n';

//     return 0;
// }

// Approach 2

// int main() {
//     int n;
//     cin >> n;

//     for(int i = 2; i <= n/2; i++) {
//         if(n % i == 0) {
//             cout << "Not Prime" << '\n';
//             exit(0);
//         }
//     }

//     cout << "Prime" << '\n';
//     return 0;
// }

// Decimal to Binary --------------------------------

// Approach 1 --------

// void decimalToBinary(int n) {
//     int bNum[100], i = 0;
//     while(n > 0) {
//         bNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     for(int j = i - 1; j >= 0; j--) cout << bNum[j];
//     cout << '\n';
// }

// Approach 2 --------

// void decimalToBinary(int n) {
//     int bNum[100], i = 0;
//     while(n != 0) {
//         bNum[i] = n & 1;
//         n = n >> 1; // same as dividing the number by 2
//         i++;
//     }

//     for(int j = i - 1; j >= 0; j--) cout << bNum[j];
//     cout << '\n';
// }

// int main()
// {
//     decimalToBinary(10);
//     decimalToBinary(9);
//     decimalToBinary(8);
//     decimalToBinary(7);
//     decimalToBinary(6);
//     decimalToBinary(5);
//     decimalToBinary(4);
//     decimalToBinary(3);
//     decimalToBinary(2);
//     decimalToBinary(1);
// }

// check if a number is ODD or EVEN using Bitwise operators -------------------------------------------

// int main() {
//     int n;
//     cin >> n;

//     int res = n & 1;
//     if(res == 1) {
//         cout << "Odd" << '\n';
//     }
//     else {
//         cout << "Even"<< '\n';
//     }

//     cout << "Result: " << res << '\n';

//     return 0;
// }

// Doubt -----------------------------------

// int main() {
//     int n;
//     cin >> n;

//     int ans = 0;
//     int i = 0;

//     while(n != 0) {
//         int bit = n & 1;
//         ans = (bit * round(pow(10, i))) + ans;
//         n = n >> 1;
//         i++;
//     }

//     cout << ans << '\n';

//     return 0;
// }

// Binary to Decimal --------------------------------

// void DecimalToBinary(int n) {
//     int i = 0, ans = 0;

//     while(n != 0) {
//         int digit = n % 10;

//         if( digit == 1) {
//             ans = ans + pow(2, i);
//         }

//         n = n / 10;
//         i++;
//     }

//     cout << ans << '\n';
// }

// int main() {
//     int n;
//     cin >> n;

//     DecimalToBinary(n);

//     return 0;
// }

// Reverse Integer (L-7) --------------------------------------

// void revInt(int n) {
//     int ans = 0;

//     while(n != 0) {
//         if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
//             cout << 0 << '\n';
//         }

//         ans = (ans * 10) + (n % 10);
//         n = n / 10;
//     }

//     cout << ans << '\n';
// }

// int main() {
//     int n;
//     cin >> n;

//     revInt(n);

//     return 0;
// }

// ----------------------------------------------------------------------------------------------
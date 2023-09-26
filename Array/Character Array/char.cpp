#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int length(char input[]) {
  int count = 0;
  for(int i = 0; input[i] != '\0'; i++) {
    count++;
  }

  return count;
}

// Reverse M-1
void reverse(char input[]) {
  int s = 0;
  int e = length(input) - 1;
  while(s < e) {
    swap(input[s], input[e]);
    s++;
    e--;
  }
}

// Reverse M-2
char *My_rev(char *str)
{
  int i,len=0,n;
  char temp;
  len=strlen(str);
  n=len-1;
  for(i = 0; i <=(len/2); i++)
  {
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}

int main() {
  char name[100];
  cout << "Enter name: ";
  cin.getline(name, 100);

  // cout << "Before reverse: " << name << '\n';
  // reverse(name);
  // cout << "After reverse: " << name << '\n';
  cout << strlen(name);
}

//----------------------------------------------------------------------------------------

// #include <iostream>
// #include <cstring>
// using namespace std;

// int length(char input[]) {
//   int count = 0;
//   for(int i = 0; input[i] != '\0'; i++) {
//     count++;
//   }

//   return count;
// }

// void reverse(char input[]) {
//   int s = 0;
//   int e = length(input) - 1;
//   while(s < e) {
//     swap(input[s], input[e]);
//     s++;
//     e--;
//   }
// }

// // Custom same string check
// bool customStrCmp(char str1[], char str2[]) {
//   if(strlen(str1) != strlen(str2)) return false;

//   for(int i = 0; str1[i] != '\0'; i++) {
//     if(str1[i] != str2[i]) return false;
//   }
//   return true;
// }

// void printAllPrefixes(char str[]) {
//   for(int end = 0; str[end] != '\0'; end++) {
//     for(int start = 0; start <= end; start++) {
//       cout << str[start];
//     }
//     cout << '\n';
//   }
// }

// void printAllSuffixes(char str[]) {
//   for(int start = strlen(str) - 1; start >= 0; start--) {
//     for(int end = start; end < strlen(str); end++) {
//       cout << str[end];
//     }
//     cout << '\n';
//   }
// }

// int main() {
//   char str1[100];
//   // char str2[100];
//   cout << "Enter str1: ";
//   cin.getline(str1, 100);
//   // cin.getline(str2, 100);

//   // cin >> str1 >> str2;

//   // cout << "Before reverse: " << str1 << '\n';
//   // reverse(str1);
//   // cout << "After reverse: " << str1 << '\n';
  
//   // Brutue force
//   // if(customStrCmp(str1, str2)) cout << "Equal" << '\n';
//   // else cout << "Unequal" << '\n';

//   // cout << "Before copy: " << '\n';
//   // cout << "str1: " << str1 << '\n';
//   // cout << "str2: " << str2 << '\n';

//   // strcpy(str1, str2);
  
//   // cout << "After copy: " << '\n';
//   // cout << "str1: " << str1 << '\n';
//   // cout << "str2: " << str2 << '\n';

//   printAllPrefixes(str1);
//   printAllSuffixes(str1);
//   return 0;
// }
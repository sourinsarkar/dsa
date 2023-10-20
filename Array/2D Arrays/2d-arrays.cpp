#include <iostream>
using namespace std;

int main() {
  int poo[100][100];
  int r,c;
  cin >> r >> c;

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> poo[i][j];
    }
  }

  // row wise output
  cout << "Row wise: " << '\n';
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cout << poo[i][j] << ' ';
    }
    cout << '\n';
  }

  // column wise output
  cout << "Column wise: " << '\n';
  for(int i = 0; i < c; i++) {
    for(int j = 0; j < r; j++) {
      cout << poo[j][i] << ' ';
    }
    cout << '\n';
  }

  // Different initialization way ---------------------------------

  int poo_2[3][3] = {{10, 20},
                  {30, 40}};

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << poo_2[i][j] << ' ';
    }
    cout << '\n';
  }

  // Init with 0(s)
  int poo_3[10][10] = {{0}};
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
        cout << poo_3[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
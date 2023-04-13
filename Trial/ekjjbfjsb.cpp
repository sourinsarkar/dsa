#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int runs[N];
        for (int i = 0; i < N; i++) {
            cin >> runs[i];
        }
        int count = 0;
        int total_runs = 0;
        for (int i = 0; i < N; i++) {
            total_runs += runs[i];
            int k = (total_runs/(i+1))*100;
            if(k==100){
                count++;
            }else{
                continue;
            }
        }
        cout << count << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int T, N, C, temp, sum;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N >> C;
        sum = 0;

        for (int j = 0; j < N; j++){
            cin >> temp;
            sum += temp;
        }

        (sum <= C) ? cout << "Yes\n" : cout << "No\n";
    }
    
    return 0;
}

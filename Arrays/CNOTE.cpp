#include <iostream>
using namespace std;

int main(){
    int T, X, Y, K, N, result;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> X >> Y >> K >> N;
        int P[N], C[N];

        for (int j = 0; j < N; j++){
            cin >> P[j] >> C[j];
        }

        for (int j = 0; j < N; j++){
            if (P[j] >= X-Y && C[j] <= K){
                result = 1;
                break;
            }
            else{
                result = 0;
            }
        }

        (result == 1) ? cout << "LuckyChef\n" : cout << "UnluckyChef\n";
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int T, X, Y, K, N, C, P, result;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> X >> Y >> K >> N;

        for (int j = 0; j < N; j++){
            cin >> P >> C;
            if (P >= X-Y && C <= K){
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

#include <iostream>
using namespace std;

int main(){
    int T, N, C;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N >> C;
        int arr[N];
        int sum = 0;

        for (int j = 0; j < N; j++){
            cin >> arr[j];
            sum += arr[j];
        }

        (sum <= C) ? cout << "Yes\n" : cout << "No\n";
    }
    
    return 0;
}

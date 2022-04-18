#include <iostream>
using namespace std;

int main(){
    int T, N, K;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N >> K;
        int arr[N], count = 0;

        for (int j = 0; j < N; j++){
            cin >> arr[j];
            arr[j] += K;

            if (arr[j] % 7 == 0){
                count++;
            }
        }

        cout << count << "\n";
    }
    return 0;
}

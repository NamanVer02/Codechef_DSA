#include <iostream>
using namespace std;

int main(){
    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N;
        int arr[N];
        bool rainbow = true;

        for (int j = 0; j < N; j++){
            cin >> arr[j];
        }

        for (int j = 0; j < N/2; j++){
            if (arr[j] != arr[N-j-1] || arr[j+1] - arr[j] > 1){
                rainbow = false;
                break;
            }
        }
    
        
        (rainbow == true && arr[N/2] == 7 && arr[0] == 1) ? cout << "yes\n" : cout << "no\n";       
        
    }
    return 0;
}

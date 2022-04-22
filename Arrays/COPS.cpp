#include <iostream>
using namespace std;
void del(int n, int arr[]);

int main(){
    int T, M, x, y, houses[100], count = 0;
    cin >> T;

    for (int i = 0; i < T; i++){
        for (int j = 0; j < 100; j++){
            houses[j] = j + 1;
        }
        
        cin >> M >> x >> y;
        int speed = x*y, cops[M];
        count = 0;

        for (int j = 0; j < M; j++){
            cin >> cops[j];

            int high = cops[j] + speed, low = cops[j] - speed;
            for (int k = low; k <= high; k++){
                del(k, houses);
            }
        }

        for (int j = 0; j < 100; j++){
            if (houses[j] != 0){
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}

void del(int n, int arr[]){
    for (int i = 0; i < 100; i++){
        if (arr[i] == n){
            arr[i] = 0;
        }
    }
}

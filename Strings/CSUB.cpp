#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int T, N, count;
    string str, temp;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N;
        cin >> str;
        count = 0;

        for (int j = 0; j < N; j++){
            for (int k = 1; k <= N-j; k++){
                temp = str.substr(j, k);
                if (temp[0] == '1' && temp.back() == '1'){
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}

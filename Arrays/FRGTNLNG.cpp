#include <iostream>
using namespace std;
void check_word(string a, string arr[], int size);

int main(){
    int T, N, K, L;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N >> K;
        string old_lang[N];
        
        for (int j = 0; j < N; j++){
            cin >> old_lang[j];
        }

        for (int j = 0; j < K; j++){
            cin >> L;
            string new_lang[L];
            
            for (int k = 0; k < L; k++){
                cin >> new_lang[k];
                check_word(new_lang[k], old_lang, N);
            }
        }

        for (int j = 0; j < N; j++){
            (old_lang[j] != "YES") ? cout << "NO " : cout << "YES ";
        }
        cout << "\n";
    }

    return 0;
}


void check_word(string a, string arr[], int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == a){
            arr[i] = "YES";
        }
    }
}

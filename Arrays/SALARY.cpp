#include <iostream>
using namespace std;
int find(int arr[], int size, int element);
int max_sal(int arr[], int size);
bool equal(int arr[], int size);
void incriment(int arr[], int size, int max);


int main(){
    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++){
        cin >> N;
        int salaries[N], count = 0;
        
        for (int j = 0; j < N; j++){
            cin >> salaries[j];
        }

        while (! equal(salaries, N)){
            count++;
            incriment(salaries, N, max_sal(salaries, N));
        }

        cout << count << "\n";
    }
    return 0;
}


int max_sal(int arr[], int size){
    int max = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] >= max){
            max = arr[i];
        }
    }
    return find(arr, size, max);
}

bool equal(int arr[], int size){
    bool result;
    for (int i = 0; i < size; i++){
        if (arr[i] == arr[0]){
            result = true;
        }
        else{
            result = false;
            break;
        }
    }
    return result;
}

void incriment(int arr[], int size, int max){
    for (int i = 0; i < size; i++){
        if (i != max){
            arr[i] += 1;
        }
    }
}

int find(int arr[], int size, int element){
    for (int i = 0; i < size; i++){
        if (arr[i] == element){
            return i;
            break;
        }
    }
}

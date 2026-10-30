#include <iostream>
using namespace std;

void selection_sort(){
    int n = 5;
    int arr[n] = {6,7,3,2,78};
    for(int i = 0; i < n-1 ; i ++){
        int min = i;
        for(int j = i; j < n; j++){
            if (arr[min]>arr[j]){
                swap(arr[j],arr[min]);
            }
        }
    }
    for(int i = 0; i < n ; i ++){
        cout << arr[i];
    }
}

void pattern_1(int n) {
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern_2(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern_3(int n){
    for (int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <= i; j ++){
            cout << j << " " ;
        }
        cout << endl;
    }
}
void pattern_4(int n){
    for(int i = 1; i <=n; i++){
        for (int j = 1; j <=i; j++){
            cout << i ;
        }
        cout << endl;
    }
}
void pattern_5(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 0; j < n - i + 1; j ++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern_6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j <= n - i +1; j++){
            cout << j << "";
        }
        cout << endl;
    }
}
void pattern_7(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i+1; j++){
            cout <<" ";
        }
        for(int j = 0; j < 2 * i +1; j++){
            cout<< "*";
        }
        for(int j = 0; j < n-i+1; j++){
            cout <<" ";
    }
    cout << endl;
}
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        // pattern_1(n);
        // pattern_2(n);
        // pattern_3(n);
        // pattern_4(n);
        // pattern_5(n);
        // pattern_6(n);
        // pattern_7(n);
        selection_sort();
    }
    return 0;
}


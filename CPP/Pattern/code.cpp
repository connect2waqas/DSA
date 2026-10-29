#include <iostream>
using namespace std;

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
int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        pattern_1(n);
        pattern_2(n);
        pattern_3(n);
        pattern_4(n);
        pattern_5(n);
        pattern_6(n);
    }
    return 0;
}
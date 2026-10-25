#include <iostream>
using namespace std;
/*
int main() {
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3];
    arr[0] = 100;
    arr[1] = 90;
    arr[2] = 80;
    arr[3] = 70;
    arr[4] = 60;
    cout << "\n" << arr[4];
 
    return 0;
}

void printHelloworld(){
   cout << "Helloworld";
}

void sumNumbers(int num1, int num2){
    int sum = num1 + num2;
    cout << "\nSum " << sum;
}
int main() {
    printHelloworld();
    cout << " ";
    sumNumbers(3,5);
    return 0;
}
*/

void Name(string &s){
    s[0]='s';
    cout << s << endl;
}
int main() {
    string s = "jawad";
    Name(s);
    cout << s;
    return 0;
}
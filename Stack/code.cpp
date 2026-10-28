#include <iostream>
using namespace std;

# define SIZE 5
int stack[SIZE];
int top = -1;
/*First input data to stack"*/
void push(int value){
    if (top == SIZE - 1){
        cout << "Stack Overflow!" << endl;
    } else{
        top ++;
        stack[top] = value;
        cout << value << " pushed into stack" << endl;
    }
}
/*Delete last element from Stack*/
void pop() {
    if (top == -1){
        cout << "Stack underflow!" << endl;
    } else {
        cout << stack[top] << " Popped from Stack." << endl;
        top -- ;
    }
}
/*Display the current elements*/
void display(){
    if (top == -1){
        cout <<"Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main () {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
#include <iostream>
using namespace std;
string response;
int add(float a, float b) {
    cout << a + b << "\n";
    cin >> response;
};

int subtract(float a, float b) {
    cout << a - b << "\n";
    cin >> response;
};

int divide(float a, float b){
    cout << a / b << "\n";
    cin >> response;
};

int multiply(float a, float b){
    cout << a * b << "\n";
    cin >> response;
};

int main(){
    cout << "enter what you'd like to do (Add, Subtract, Multiply, or Divide): ";
    cin >> response;
    float a,b;
    if(response == "Add"){
        cout << "Number One: ";
        cin >> a;
        cout << "Number Two: ";
        cin >> b;
        add(a,b);
    }
    else if(response == "Subtract"){
        cout << "Number One: ";
        cin >> a;
        cout << "Number Two: ";
        cin >> b;
        subtract(a,b);
    }
    else if(response == "Multiply"){
        cout << "Number One: ";
        cin >> a;
        cout << "Number Two: ";
        cin >> b;
        multiply(a,b);
    }
    else if(response == "Divide"){
        cout << "Number One: ";
        cin >> a;
        cout << "Number Two: ";
        cin >> b;
        divide(a,b);
    }
    else{
        cout << "Error 44";
    };

}
#include <iostream>
using namespace std;

int add(float a, float b) {
    string pause;
    cout << a + b << "\n" << "Type anything once ready to close" << "\n";
    cin >> pause;
};

int subtract(float a, float b) {
    string pause;
    cout << a - b << "\n" << "Type anything once ready to close" << "\n";
    cin >> pause;
};

int divide(float a, float b){
    string pause;
    cout << a / b << "\n" << "Type anything once ready to close" << "\n";
    cin >> pause;
};

int multiply(float a, float b){
    string pause;
    cout << a * b << "\n" << "Type anything once ready to close" << "\n";
    cin >> pause;
};

int main(){
    cout << "enter what you'd like to do(Add,Subtract, Multiply, or Divide): ";
    string response;
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
        cout << "error 44";
    };

}
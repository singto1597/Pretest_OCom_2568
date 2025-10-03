#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;
    int FNumber = 0, SNumber = 0, GNumber = 0;
    for (int i = 0; i < input.length(); i++){
        if (input[i] == 'F'){
            FNumber ++;
        }
        else if (input[i] == 'S'){
            SNumber ++;
        }
        else if (input[i] == 'G'){
            GNumber ++;
        }
    }
    for (int i = 0; i < FNumber; i++){
        cout << 'F';
    }
    for (int i = 0; i < SNumber; i++){
        cout << 'S';
    }
    for (int i = 0; i < GNumber; i++){
        cout << 'G';
    }
}
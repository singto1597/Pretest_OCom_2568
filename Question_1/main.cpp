#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cin >> input;
    string firstInput = input;
    int count = 0;
    long long minStr = 1000000;
    string StrLoop = "";
    for (int number = 1; number <= 2; number++){
        for (int i = 1; i <= input.length(); i++){
            string sub = input.substr(0, i);
            for (int j = i; j <= input.length(); j += i){
                if (sub != input.substr(j, i)){
                    count = 0;
                    minStr = 1000000;
                    break;
                }
                if (sub == input.substr(j, i) && i != 1){
                    //cout << input.substr(j, i) << endl;

                    if (minStr >= i){
                        StrLoop = sub;
                        minStr = i;
                        count++;

                    }
                    if (count >= 10){
                        break;
                    }

                }
            }
            if (count >= 10){
                break;
            }
        }
        input = StrLoop;
    }



    //count ++;
    if (StrLoop == ""){
        StrLoop = input;
    }
    cout << StrLoop.length() << " " << StrLoop << " " << firstInput.length()/StrLoop.length() << endl;
}
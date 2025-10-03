#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long perfectPoint = 3, GreatPoint = 2, GoodPoint = 1;
    string BestPerson;
    long long Bestpoint = 10000;
    for (int i = 0; i < n; i++){
        string perfect;
        long long great, good, bad, miss;
        long long point;
        string name;
        cin >> name;
        cin >> perfect >> great >> good >> bad >> miss;
        point = great*1 + good*2 + bad*3 + miss*3;
        if (point < Bestpoint){
                Bestpoint = point;
                BestPerson = name;
        }

    }
    cout << BestPerson;
}
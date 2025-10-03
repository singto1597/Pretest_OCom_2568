#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int perfectPoint = 3, GreatPoint = 2; GoodPoint = 1;
    string BestPerson;
    long long Bestpoint = -10000;
    for (int i = 0; i < n; i++){
        long long perfect, great, good, bad, miss;
        long long point;
        string name;
        cin >> name;
        cin >> perfect >> great >> good >> bad >> miss;
        point = perfect * perfectPoint + great * GreatPoint + good * GoodPoint;
        if (point > Bestpoint){
            Bestpoint = point;
            BestPerson = name;
        }
        cout << name;
    }
}
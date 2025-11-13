#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numIngre;
    int numServing;
    int myServing;
    
    cin >> numIngre >> numServing >> myServing;
    
    vector<int> ingredients(numIngre);
    
    for (int i = 0; i < numIngre; i++) {
        cin >> ingredients[i];
    }
    
    for (int i = 0; i < numIngre; i++) {
        long long scaled = (long long)ingredients[i] * myServing / numServing;
        cout << scaled << endl;
    }
    
    return 0;
}
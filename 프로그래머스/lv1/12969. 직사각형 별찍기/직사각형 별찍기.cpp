#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    string line;
    
    for (int i = 0; i < a; i++)
        line += "*";    
    for (int j = 0; j < b; j++){
        cout << line << endl;
    }
    
    return 0;
}
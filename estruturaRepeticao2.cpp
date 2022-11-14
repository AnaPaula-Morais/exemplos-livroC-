#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float temp = 0;
    for(int i = 0; i < 5; i++){
        cout << "Digite a temperatura" << endl;
        cin  >> temp;
        
        cout << "A temperatura e " << temp << " C" << endl;  
    }

}
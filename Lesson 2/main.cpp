/* 
 * File:   main.cpp
 * Author: Magikarp
 *
 * Created on 15. Dezember 2014, 14:38
 */

#include <iostream>

using namespace std;



int main(int argc, char** argv) {
    int sum = 0;
    int max = 1000;
    
    for (int i = 1; i < max; i++) {
        if (((i % 3) == 0) || ((i % 5) == 0)) {
            sum += i;
            cout << "i = " << i << "; sum = " << sum << endl;
        }
    }
    
    cout << sum << endl;
    return 0;
}


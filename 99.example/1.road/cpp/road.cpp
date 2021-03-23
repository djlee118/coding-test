#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 5;
    string road("RRRUDD");

    int x = 1;
    int y = 1;
    int c = road.length();

    for(int i=0;i < c; i++) {

        char r = road[i];

        if( (r == 'L') && (y != 1) ) {
            y -= 1;
        } else if( (r == 'R') && (y != n)) {
            y += 1;
        } else if( (r == 'U') && (x != 1)) {
            x -= 1;
        } else if( (r == 'D') && (x != n)) { 
            x += 1;
        } 

    }

    cout << "(x,y):" << x << "," << y << endl;

    return 0;
}

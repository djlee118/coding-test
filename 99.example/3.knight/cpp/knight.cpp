#include <iostream>
#include <string>

using namespace std;

const int CASE_SIZE=8; 
const int STEP_SIZE=3;

int main() {
    int ret = 0;
    string pos;
    getline(cin, pos);

    string arr[CASE_SIZE] = {"UUL", "UUR", "DDL", "DDR", "LLU", "LLD", "RRU", "RRD"};

    int row = pos[1] - '0';   
    int col = pos[0] - 'a' + 1;

    for(int i=0; i<CASE_SIZE; i++) {        
        for(int j=0; j<STEP_SIZE; j++) {
            if(arr[i][j] == 'U') {
                row--;
            } else if(arr[i][j] == 'D') {
                row++;
            } else if(arr[i][j] == 'L') {
                col--;
            } else if(arr[i][j] == 'R') {
                col++;
            }
        }
        
        if( (row <= 8) && (row >= 1) && (col <= 8) && (col >= 1) ) {                            
            ret++;
        }
        
        row = pos[1] - '0'; 
        col = pos[0] - 'a' + 1;
             
    }

    cout << ret << endl;
    return 0;

}

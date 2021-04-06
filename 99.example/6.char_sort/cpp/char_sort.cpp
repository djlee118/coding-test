#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int sum = 0;
    int size = str.size();

    vector<char> v;

    for(int i=0; i<size; i++) {
        if(isdigit(str[i])) {
            sum += str[i] - '0';
        } else {
            v.push_back(str[i]);
        }
    }

    sort(v.begin(),v.end());
    string res(v.begin(), v.end());    

    res += to_string(sum);   

    cout << res << endl;

    return 0;
}

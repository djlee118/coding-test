#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

vector<string> split_string(string);

// Complete the rotLeft function below.
  vector<int> rotLeft(vector<int> a, int d) {
    int k=a.size();
  
    vector<int> res(k);
    int j=0;
     
    for(int i=0; i<k; i++) {                    
        res[j++] = a[(i+d) % k];
    }
    
    return res;
}

int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = atoi(nd[0].c_str());

    int d = atoi(nd[1].c_str());

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = atoi(a_temp[i].c_str());

        a[i] = a_item;
    }

    vector<int> result = rotLeft(a, d);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";  

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        //input_string.pop_back();
        input_string.back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

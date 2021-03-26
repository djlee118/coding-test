#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;  
  getline(cin,s);

  int n = stoi(s);
  int cnt = 0;

  for(int i=0; i<n+1; i++){
      for(int j=0; j<60; j++){
          for(int k=0; k<60; k++) {
               string tmp;        

               tmp = to_string(i) + to_string(j) + to_string(k);

               if(string::npos != tmp.find("3")) {
                   cnt++;
               }                     
          }
      }
  }

  cout << cnt << endl;
  return 0;
}




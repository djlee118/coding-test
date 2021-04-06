#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  int lsum = 0;
  int rsum = 0;

  getline(cin, str);

  int size = str.size();
  int div = size / 2;  
  int ret = 0;

  for(int i=0;i<size;i++) {
      ret = str[i] - '0';
      if(i<div) {          
          lsum += ret;
      } else {
          rsum += ret;
      }
  }

  if(lsum == rsum) {  
      cout << "LUCKEY" << endl;
  } else {
      cout << "READY" << endl;
  }

  return 0;
}

#include <iostream>

using namespace std;

int main() {
  int n=25;
  int k=3;
  int ret = 0;
  
  while(n>=k) {
    if((n%k) != 0) {
      n -= 1;
      ret++;
      cout << "(n%k) != 0):" << ret << endl;
      continue;      
    } else {          
      n=n/k;
      ret++;
      cout << "(n%k) == 0):" << ret << endl;

      if(n == 1) {
        cout << "(n==1):" << ret << endl;
        break;
      }
    }
  }

  while(n<k) {
      cout << "(n<k):" << ret << endl;
      if(n<=1){
        break;
      }

      n--;
      ret++;
  }

  cout << ret << endl;

  return 0;
}

#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main(int argc, char* argv[])
{
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    s.push(6);
    s.push(7);
    s.pop();

    while(!s.empty()) {
        cout << s.top() << ' ' ;
        s.pop();
    }
}
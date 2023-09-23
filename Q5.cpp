#include <iostream>
using namespace std;

int bar(char a) {
    return a;
}

int bar(char a, char b) {
    return a + b;
}

int main() {
    int ans1 = bar('A');

    int ans2 = bar('A', 'B');

    cout<<ans1<<endl;

    cout<<ans2<<endl;
}
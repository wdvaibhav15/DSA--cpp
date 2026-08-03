#include <iostream>
using namespace std;

class Demo {
private:
    int x;

public:
    Demo() {
        x = 100;
    }

    friend void show(Demo);
};

void show(Demo d) {
    cout << d.x;
}

int main() {
    Demo d;
    show(d);
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double R;
    double y;

    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    if (x <= -1) {
        y = 1;
    }
    else if (x > -1 && x <= 2) {
        y = -1.0 / R * pow(x + 1, 2);
    }
    else if (x > 2) {
        y = x - 4;
    }

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}

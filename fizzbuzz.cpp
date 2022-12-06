#include <iostream>
using namespace std;
#define FIZZ 3
#define BUZZ 5

int main() {
    int count = 1;

    while (true) {
        if (count % (FIZZ * BUZZ))
            cout << "FizzBuzz" << endl;
        else if (count % FIZZ)
            cout << "Fizz" << endl;
        else if (count % BUZZ)
            cout << "Buzz" << endl;
        else
            cout << count << endl;
    }

    return 0;
}
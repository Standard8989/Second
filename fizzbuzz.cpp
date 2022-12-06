#include <iostream>
using namespace std;
#define FIZZ 3
#define BUZZ 5

int main() {
    int count = 1;

    while (true) {
        if (count % (FIZZ * BUZZ)==0)
            cout << "FizzBuzz" << endl;
        else if (count % FIZZ==0)
            cout << "Fizz" << endl;
        else if (count % BUZZ==0)
            cout << "Buzz" << endl;
        else
            cout << count << endl;
    }

    return 0;
}
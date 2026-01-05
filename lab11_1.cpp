#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    string input;

    cout << "Press Enter 3 times to reveal your future." << endl;

    // รอ Enter 3 ครั้ง
    for (int i = 0; i < 3; i++) {
        getline(cin, input);
    }

    // สุ่มเกรด
    srand(time(0));
    int randIndex = rand() % 9;

    cout << "You will get " << grades[randIndex]
         << " in this 261102." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    cout << "Enter your score: " << endl;
    cin >> score;
    cout << "Your score is " << score << endl;

    if (score > 600) {
        cout << "You are eligible for a scholarship" << endl;
    } else {
        cout << "You are not eligible for a scholarship" << endl;
    }
    return 0;
}
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    char ch = 'a';
    std::cout << ch << std::endl;
    cout << sizeof(char) << endl;

    cout << (int)ch << endl;

    ch = 97;
    cout << ch << endl;
    cout << "Press Enter to exit..." << endl;
    cin.get();

    return 0;
}
#include <iostream>

using namespace std;

bool canWinNim(int n) {
    return n % 4 != 0;
}

int main()
{
    cout << canWinNim(4) << endl;

    return 0;
}
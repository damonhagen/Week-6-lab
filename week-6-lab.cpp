#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter your grade!" << endl;

    cin >> x;

    if (x >= 86)
    {
        cout << "You got an A!" << endl;
    }

    else if (x >= 72)
    {
        cout << "You got a B!" << endl;
    }

    else if (x >= 60)
    {
       cout << "You got a C!" << endl;
    }

    else if (x >= 50)
    {
       cout << "You got a D!" << endl;
    }
    else 
    {
       cout << "You got an F!" << endl;
    }

return 0;
}

#include <iostream>
#include "LTimer.hpp"

using namespace std;

int main()
{

    LTimer t;

    t.setReapet([&]()
                {
        static int i = 0;
        cout << "Hey.. After each "<< i++ <<"s..." << endl; },
                1000, 10);

    cout << "I am LTimer" << endl;

    while (true)
        ; // Keep mail thread active
}

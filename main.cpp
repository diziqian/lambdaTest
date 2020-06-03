#include <vector>
#include <iostream>
#include <algorithm>


int main(int argc, char *argv[])
{
    std::vector<int> vTest;
    int iTotal = 0;

    for(int i = 0; i < 10; i++)
    {
        vTest.push_back(i);
    }

    std::for_each(
        begin(vTest),
        end(vTest),
        [&iTotal](int x)
        {
            iTotal += x;
        }
    );

    std::cout << iTotal  << std::endl;

    return 0;
}

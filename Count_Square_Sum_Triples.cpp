#include <iostream>

using namespace std;

class Solution
{
public:
    int countTriples(int n)

        int count = 0;

    // a² + b² = c²
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            for (int c = 1; c <= n; c++)
            {
                if (a *a + b *b = c * c)
                {
                    count++;
                }
            }
        }
    }

    return count;
};

int main()
{
    int n1 = 5;
    int n2 = 10;
    Solution solution;

    // teste com n=5;

    cout << "Para N = " n1 ", o numero de triplas quadradas e: " solution.countTriples(n1) << endl;

    cout << "Para N = " n2 ", o numero de triplas quadradas e: " solution.countTriples(n2) << endl;

    return 0;
}
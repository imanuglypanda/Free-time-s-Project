#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n Find the perfect numbers between 1 to the chosen's highest value:\n";
    cout << "------------------------------------------------\n";
    int i = 1, u = 1, sum = 0, highest_value;
    cout << "Enter Highest Value : ";
    cin >> highest_value;
    cout << "\n The perfect numbers between 1 to " << highest_value << " are\n";
    while (i <= highest_value)
    {
        while (u <= highest_value)
        {
            if (u < i)
            {
                if (i % u == 0)
                    sum = sum + u;
            }
            u++;
        }
        if (sum == i) {
            cout << i << endl;
        }
        i++;
        u = 1;
        sum = 0;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[17] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 6, 9, 9, 9, 9, 9, 9, 9};

    int maxFreq = 0;
    int maxAns = 0;

    unordered_map<int, int> count;

    for (int i = 0; i < 17; i++)
    {

        count[arr[i]] = count[arr[i]] + 1; // using this we had putted value in the unorderedMap
        maxFreq = max(maxFreq, count[arr[i]]);

        
    }

    for (int i = 0; i < 17; i++)
    {

        if (maxFreq == count[arr[i]])
        {

            maxAns = arr[i];
            break;
        }
    }

    cout << maxAns;

    return 0;
}
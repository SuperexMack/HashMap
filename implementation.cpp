#include <bits/stdc++.h>
using namespace std;

int main()
{

    // creation of a map
    unordered_map<string, int> mack1;

    // insertion

    // first way

    pair<string, int> mack2 = make_pair("mack", 3);

    mack1.insert(mack2);

    // second method

    pair<string, int> pair2("mohit", 2);
    mack1.insert(pair2);

    // third method

    mack1["sati"] = 1;

    // searching

    cout << mack1["mack"] << endl;     // ans will be 3
    cout << mack1.at("mohit") << endl; // ans will be 2
    // cout<<mack1.at("unKnownkey")<<endl; it will give an error
    cout << mack1["unknown"] << endl; // it will give output as 0 it will not give any error
    cout << mack1.size() << endl;     // it will cout entry of [ ] wala map
    cout << mack1.count("rahul") << endl;
    cout << mack1.count("mack") << endl;

    // note count will return 1 if that element is present in the map otherwise it will return 0

    mack1.erase("sati"); // it will remove that element from the map

    cout << mack1.size() << endl;

    // accessing the whole map

    cout << "Accessing the whole map" << endl;

    for (auto i : mack1)
    {

        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    cout << endl;

    // iterator for accessing the whole unorderedMap

    cout << "Accessing the whole unorderedMap using iterator" << endl;

    unordered_map<string, int>::iterator it = mack1.begin();

    while (it != mack1.end())
    {

        cout << it->first << " " << it->second << endl;
        it++;
    }

    // whenever we use unordered map so during printing of element the element do not asynchronus wise

    // whenever we use map then the time complexity is O(logN) and when we use unordered list then time complexity is O(1).

    return 0;
}

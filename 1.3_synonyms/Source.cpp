#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, string> synonyms;
    int num;
    string first, second, key;
    cout << "input amount of pairs:  ";
    cin >> num;
    cout << "input pairs:  " << endl;

    for (int i = 0; i < num; i++) {
        cin >> first >> second;
        synonyms.insert(pair<string, string>(first, second));
    }

    cout << "input key word:  ";
    cin >> key;

    map <string, string>::iterator itr;
    for (itr = synonyms.begin(); itr != synonyms.end(); itr++) {
        if (key == itr->first)
            cout << itr->second;
        else if (key == itr->second)
            cout << itr->first;
    }

    return 0;
}
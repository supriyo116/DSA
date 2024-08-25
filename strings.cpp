#include <string>
#include <iostream>

using namespace std;

int main()
{

    // concatenation
    string firstName = "Supriyo";
    string lastName = " Bhattacharya";
    string fullName = firstName + lastName; // "Supriyo Bhattacharya"

    // append
    string s = "Hello";
    s += " World"; // "Hello World"
    s.append("!"); // "Hello World!"

    // accessing characters
    char ch = s[0];     // 'H'
    char ch2 = s.at(1); // 'e'

    // length of string
    int len = s.length(); // 12

    // substring
    string sub = s.substr(6, 5); // "World"

    // finding substrings
    size_t pos = s.find("World"); // 6

    // replacing substrings
    s.replace(6, 5, "Universe"); // "Hello Universe!"

    // inserting substring
    s.insert(6, "Amazing "); // "Hello Amazing Universe!"

    // erasing a part of string
    s.erase(6, 8); // "Hello Universe!"

    // string comparision
    if (s == "Hello Universe!")
    {
        cout << "Strings are equal" << endl;
    }

    // clearing a string
    s.clear(); // Now s is an empty string ""

    // checking a empty string
    if (s.empty())
    {
        cout << "String is empty" << endl;
    }

    return 0;
}

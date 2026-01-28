// Demonstrate major string functions in C++
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string str = "Hello, World!";

    // Access characters
    cout << "Characters:\n";
    for (char c : str) cout << c;
    cout << "\n\n";

    // Length
    cout << "Length: " << str.length() << "\n\n";

    // Concatenation
    string str2 = "This is a concatenated string.";
    string str3 = str + " " + str2;
    cout << "Concatenation: " << str3 << "\n\n";

    // Substring
    cout << "Substring: " << str.substr(7, 5) << "\n\n";

    // Compare
    cout << "Compare:\n";
    cout << str.compare("Hello, World!") << "\n";
    cout << str.compare("Hello, Codeium!") << "\n\n";

    // Find
    cout << "Find 'World' at index: " << str.find("World") << "\n\n";

    // Replace
    string temp = str;
    temp.replace(7, 5, "Code");
    cout << "Replace: " << temp << "\n\n";

    // Insert
    temp = str;
    temp.insert(7, "Amazing ");
    cout << "Insert: " << temp << "\n\n";

    // Erase
    temp = str;
    temp.erase(7, 5);
    cout << "Erase: " << temp << "\n\n";

    // Swap
    cout << "Before swap:\n" << str << "\n" << str2 << "\n\n";
    str.swap(str2);
    cout << "After swap:\n" << str << "\n" << str2 << "\n\n";

    // Starts with / Ends with (C++20)
    // cout << str.starts_with("Hello") << endl;
    // cout << str.ends_with("!") << endl;

    // Uppercase
    temp = str;
    for (char &c : temp) c = toupper(c);
    cout << "Uppercase: " << temp << "\n\n";

    // Lowercase
    temp = str;
    for (char &c : temp) c = tolower(c);
    cout << "Lowercase: " << temp << "\n\n";

    return 0;
}

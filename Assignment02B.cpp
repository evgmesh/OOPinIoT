#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "Please input your strings. End with [stop]\n";
    vector<string> book;
    string buffer;
    int longest = 0, cnt = 0, index;
    while (getline(cin,buffer) && buffer != "stop")
        book.push_back(buffer);
    if(!book.empty()) {
        cout << "In total you have entered " << book.size() << " strings as follow: \n";
        for(auto str: book) {
            cout << str << endl;
            if (str.length() > longest) {
                longest = str.length();
                index = cnt;
            }
            cnt++;
        }
        cout << "\nYour longest string ("<< longest << " characters long) "
             << "is: [" << book[index]<< "] \n";
    }
    cout << "Size: " << book.size() << ",capacity: " << book.capacity();
    return 0;
}

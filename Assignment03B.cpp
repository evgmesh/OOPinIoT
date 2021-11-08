#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;
void printer(vector<string> str);

int main() {
    vector<string> book;
    string buffer;
    cout << "Please input your strings. End with [stop]\n";
    while (getline(cin,buffer) && buffer != "stop") {
        book.push_back(buffer);
    }
    cout << "In total you have entered " << book.size() << " strings as follow: \n";
    printer(book);
    reverse(book.begin(), book.end());
    cout << "After reverse\n";
    printer(book);

    return 0;
}
vector<string> backwards (vector<string> str)
{

}
void printer(vector<string> str)
{
    if(!str.empty()) {
        for(auto i: str)
            cout << i << endl;
    }
}
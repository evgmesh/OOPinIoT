/* Evgenii Meshcheriakov. Assignment 3 B */

#include <iostream>
#include <vector>
#include <string>

using namespace std;
void printer(vector<string> str);
vector<string> backwards (vector<string> str);

int main() {
    vector<string> book;
    string buffer;
    cout << "Please input your strings. End with [stop]\n";
    while (getline(cin,buffer) && buffer != "stop") {
        book.push_back(buffer);
    }
    if(!book.empty()) {
        cout << "In total you have entered " << book.size() << " strings as follow: \n";
        printer(book);
        book = backwards(book);
        cout << "After reverse and sort\n";
        printer(book);
    }

    return 0;
}
vector<string> backwards (vector<string> str)
{
    vector<string> nstr;
    for(auto st : str) {
            reverse(st.begin(), st.end());
            nstr.push_back(st);
    }
    sort(nstr.begin(),  nstr.end(), greater<string>());
    return nstr;
}
void printer(vector<string> str)
{
    if(!str.empty()) {
        for(vector<string>::iterator i = str.begin(); i != str.end(); ++i)
            cout << *i << endl;
    }
}
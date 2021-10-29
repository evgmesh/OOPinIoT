// Exercise 2A

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

string find_field(const string &xml, string tag_name);

int main() {
    string page, line, location, temperature;
    ifstream inputFile("../weather.xml");

    while (getline (inputFile, line)) {
        page.append(line);
        line.erase();
    }
    inputFile.close();

    location = find_field(page, "location");
    temperature = find_field(page, "temperature");
    cout << "Location: " << location << endl;
    cout << "Temperature: " << temperature << endl;

// check for not existed tag:

//    line = find_field(page, "line");
//    cout << "Line: " << line << endl;
}
string find_field(const string &xml, string tag_name)
{
    size_t initpos, endpos;

    initpos = xml.find('<' + tag_name);
    if(initpos == string::npos)
        return "not found";
    initpos = xml.find('>', initpos);

    endpos = xml.find("</" + tag_name, initpos++);
    if(endpos == string::npos)
        return "not found";

    return xml.substr(initpos, endpos - initpos);
}


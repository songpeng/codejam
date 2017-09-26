#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    // write file.
    ofstream myfile;
    myfile.open("filedir");
    if (myfile.is_open()) {
        myfile << "hi..." << endl;
        myfile.close();
    }
    // read file.
    ifstream infile ("filenm");
    string line;
    int num;
    while(getline(myfile, line)) {
        cout << line << endl;
        stringstream(line) >> num;
    }
    infile.close();

    stringstream ss;
    ss.str("write to ss");
    string content = ss.str();

    return 0;
}

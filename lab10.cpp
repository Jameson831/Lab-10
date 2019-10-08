#include<iostream>
#include<fstream>

using namespace std;

int main() {
    string filename;
    cout << "What file would you like to open?" << endl;
    cin >> filename;
    ifstream myReadFile;
    myReadFile.open(filename);
    string output;
    
    int countlines = 0;
    int c = 0;
    if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            getline(myReadFile, output);
            cout<<output;
            cout <<endl;
            ++countlines;
            c += output.length();
        }
        
    }
    cout << "METADATA" << endl;
    cout<< "File: " << filename << endl;
    cout << "Lines: " << countlines << endl;
    cout << "Characters: " << c << endl;
    myReadFile.close();

    return 0;
}





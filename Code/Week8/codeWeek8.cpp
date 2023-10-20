#include <iostream>
#include <fstream>
#include <sstream>  // StringStreams!
#include <vector>

using namespace std;
int main(void)
{
    cout << "======== File Streams ========" << endl << endl;
    // create an input file stream object
    ifstream fin;

    // open myFile.txt with the file stream object
    fin.open("myFile.txt");
    // check if file opened successfully
    if (fin.fail()) {
        cout << "Could not open file." << endl;
        return 1;
    }
    else {
        string line = "";
        int line_idx = 0;

        // read each line from the file
        while (!fin.eof()) {
            // gets line of text from file_input, stores it in line
            getline(fin, line);
            // print each line read from the file
            cout << line_idx << ": " << line << endl;
            // increment index (count of lines in the file)
            line_idx++;   
        }
        cout << endl;
    }
    // closing the file
    fin.close();

    cout << "===== String Streams =====" << endl << endl;
    /* ===== String Streams ===== */
    // String Streams allows you to read from and write to strings as if they were streams!
    // allowing you to use the extraction (>>) operator and the insertion (<<) operator

    // Two ways to assign a value(string) to a string stream.
    // First: using parentheses
    stringstream ss1("Hello World CSCI 1300");
    // Second: use the insertion operator to the declared stringstream
    stringstream ss2;
    ss2 << "Hello World CSCI 1300";

    // In order to read contents from the string stream, we use the extraction (>>) operator to read word by word
    stringstream ss;
    string word;
    ss << "Hello World CSCI 1300";
    while (ss >> word) {
        cout << word << endl;
    }
    cout << endl;

    // The extraction operator seperates by spaces. What if we want to get a entire line?
    // We can mix getline with string streams!
    string line_str = "Chanheum Park, 28";
    stringstream ss3(line_str);
    string name, age;
    getline(ss3, name, ',');
    getline(ss3, age);
    int age_num = stoi(age);    // stoi converts a string to an integer! 
    if(age_num >= 16) {
        cout << name << " can get a license." << endl;
    }
    else {
        cout << name << " should walk to campus from Superior!" << endl;
    }
    // stoi()   // If you want to convert a string to an integer
    // stof()   // If you want to convert a string to a float
    // stod()   // If you want to convert a string to a double
    // substr(0, 4)   // start from index 0 and extract 4 characters as a substring
    
    cout << endl << "======== Reusing Stringstreams ========" << endl;
    stringstream ss4("this is a test\n");
    string w;
    while(ss4 >> w) {
        cout << w << endl;
    }
    cout << endl;
    // checks on the status of ss
    if(ss4.fail()) {
        ss4.clear();
        ss4.str("");
    }
    
    ss4.str("this is the second test\n");

    while(ss4 >> w) {
        cout << w << endl;
    }

    return 0;
}

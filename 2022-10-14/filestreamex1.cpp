#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

#define MAX_FILENAME_SIZE 128
#define COLUMN_WIDTH 80

void FileStreamTest(){
    //ofstream: file output stream
    ofstream fout("C:\\Users\\000401934\\OneDrive - Vancouver Community College\\Documents\\GitHub\\Intro-C\\2022-10-14\\TextFiles\\output1.txt");

    fout << "this is the first line.\n";
    fout << "this is the second line.";

    fout.close();
    // ifstream: file input stream

    ofstream fout2("C:\\Users\\000401934\\OneDrive - Vancouver Community College\\Documents\\GitHub\\Intro-C\\2022-10-14\\TextFiles\\output2.txt");

    fout2 << "this is the first line.\n";
    fout2 << "this is the second line.";

    fout.close();
    
}

void FileStreamTest2() {
    int const filename_maxsize = 200;
    char filename[filename_maxsize];

    cout << "Enter a filename and press ENTER:\n";
    cin.getline(filename, filename_maxsize);
    strcat_s(filename, ".txt");

    ofstream file_out(filename);

    if (!file_out) {
        cout << "Filename: " << filename << " could not be opened.\n";
        return;
    }

    cout << "Filename: " << filename << " was opened.\n";
    file_out << "This is my first line.\n";
    file_out << "This is my second line.\n";
    file_out << "end\n";

    file_out.close();
}

void DisplayFile() {
    int const filename_maxsize = 100;
    char filename[filename_maxsize];

    cout << "enter a filename to read:\n";
    cin.getline(filename, filename_maxsize);

    ifstream file_in(filename);

    if (!file_in) {
        cout << filename << " could not be read.\n";
        return;
    }

    char inputLine[COLUMN_WIDTH + 1];

    /*while (true) {
        for (int i = 1; i <= 24 && !file_in.eof(); ++i) {
            file_in.getline(inputLine, COLUMN_WIDTH);
            cout << inputLine << endl;
        }
        if (file_in.eof()) {
            break;
        }
    }*/

    string line;
    while (!file_in.eof()) {
        getline(file_in, line);
        cout << line << endl;
    }
}
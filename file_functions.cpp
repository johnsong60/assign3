// Author: johnathan song
// GitHub:
// September 26, 2020
// csis 123a

#include "file_functions.h"
#include <string>
#include <fstream>
using namespace std;

void saveData(DataStore &my_data) {
    fstream stream;
    stream.open(INPUT_FILE, ios::out);
    if (stream.is_open()) {

        stream << my_data.toString();

        stream.close();
    }
}

void retrieveData(DataStore &my_data) {
    fstream stream;

    stream.open(INPUT_FILE, ios::in);
    
    string input;
    string a_str;
    int an_int;
            

    if (stream.is_open()) {

        getline(stream, input);
        int size = stoi(input);
        

        for (int i = 0; i < size; i++) {

            getline(stream, input);
            a_str = input;
            
            getline(stream, input);
            an_int = stoi(input);
            
            my_data.addItem(a_str, an_int);
        }        
        stream.close();
    }
}
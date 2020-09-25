// Author: johnathan song
// GitHub:
// September 26, 2020
// csis 123a


#include <iostream>
#include <sstream>
using namespace std;
#include "DataStore.h"

DataStore::DataStore() {

}

void DataStore::addItem(string item1, int item2) {

    arrayitem1.push_back(item1);
    arrayitem2.push_back(item2);
}

void DataStore::listItems() {

    for (int i = 0; i < arrayitem1.size(); ++i) {
        cout << arrayitem1[i] << " " << arrayitem2[i] << "\n";
    }
}

void DataStore::findItem(string item) {
    for (int i = 0; i < arrayitem1.size(); ++i) {
        if (arrayitem1[i] == item) {
            cout << arrayitem1[i] << " " << arrayitem2[i] << "\n";
            return;
        }
    }
    cout << "Not Found\n";
}

string DataStore::toString() {   
    
    ostringstream oss;
    oss << this->arrayitem1.size() << "\n";
    
    for (int i = 0; i < arrayitem1.size(); ++i) {
        oss << arrayitem1[i] << "\n";
        oss << arrayitem2[i] << "\n";
    }    
    
    return oss.str();
}

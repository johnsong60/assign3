// Author: johnathan song
// GitHub:
// September 26, 2020
// csis 123a


#ifndef ASSIGNMENT_1_DATASTORE_H
#define ASSIGNMENT_1_DATASTORE_H

#include <string>
#include <vector>
using namespace std;

class DataStore {
private:

    vector<string> arrayitem1;

    vector<int> arrayitem2;

public:
    DataStore();

    void addItem(string item1, int item2);

    void listItems();
    

    void findItem(string item);
    
    string toString();
};

#endif //ASSIGNMENT_1_DATASTORE_H

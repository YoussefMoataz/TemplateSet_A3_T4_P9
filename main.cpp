/*
 * Author   : Youssef Moataz
 * ID       : 20210488
 * Date     : November 18, 2022
 */

#include <bits/stdc++.h>

using namespace std;

void printDashes() {
    cout << string(20, '-') << endl;
}

template<typename YM>
class YSet {

private:
    vector<YM> Data;

public:
    YSet() = default;

    void addItem(YM item) {

        bool inSet = false;

        for (int i = 0; i < Data.size(); ++i) {
            if (Data[i] == item) {
                inSet = true;
                break;
            }
        }

        if (!inSet) {
            Data.push_back(item);
        }

    }

    int getSize() {

        return Data.size();

    }

    bool removeItem(YM item) {

        for (int i = 0; i < Data.size(); ++i) {
            if (Data[i] == item) {
                Data.erase(Data.begin() + i);
                return true;
            }
        }

        return false;

    }

    bool isMember(YM item) {

        bool inSet = false;

        for (int i = 0; i < Data.size(); ++i) {
            if (Data[i] == item) {
                inSet = true;
                break;
            }
        }

        return inSet;

    }

    YM * getData(){

        YM * data = new YM[Data.size()];

        for (int i = 0; i < Data.size(); ++i) {
            data[i] = Data[i];
        }

        return data;

    }

};

int main() {

    YSet<string> ySet;

    ySet.addItem("joe");
    ySet.addItem("joe"); // not added
    cout << ySet.getSize() << endl; // 1

    ySet.addItem("hassan");
    cout << ySet.getSize() << endl; // 2

    ySet.addItem("mohamed");
    cout << ySet.getSize() << endl; // 3

    printDashes();

    ySet.removeItem("hassan");
    cout << ySet.getSize() << endl; // 2

    ySet.removeItem("ammar"); // nothing removed
    cout << ySet.getSize() << endl; // 2

    printDashes();

    cout << (ySet.isMember("hassan")) << endl; // 0
    cout << (ySet.isMember("mohamed")) << endl; // 1

    printDashes();

    string * sD = ySet.getData();

    for (int i = 0; i < 2; ++i) {
        cout << sD[i] << " , "; // prints
    }
    cout << endl;

    delete [] sD;

//    for (int i = 0; i < sD->size(); ++i) {
//        cout << sD[i] << " , "; // error
//    }
//    cout << endl;

    printDashes();

    YSet<int> ySet2;

    ySet2.addItem(4);
    ySet2.addItem(1);
    ySet2.addItem(2);
    ySet2.addItem(7);

    int * sD2 = ySet2.getData();

    for (int i = 0; i < 4; ++i) {
        cout << sD2[i] << " , "; // prints
    }
    cout << endl;

    delete [] sD2;

    ySet2.addItem(99);

    sD2 = ySet2.getData();

    for (int i = 0; i < 5; ++i) {
        cout << sD2[i] << " , "; // prints
    }
    cout << endl;

    delete [] sD2;

    return 0;
}

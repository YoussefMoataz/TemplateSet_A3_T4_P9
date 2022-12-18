#include <bits/stdc++.h>

using namespace std;

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
            }
        }

        if (!inSet) {
            Data.push_back(item);
        }

    }

    int getSize() {

        return Data.size();

    }

};

int main() {

    YSet<string> ySet;

    ySet.addItem("joe");
    cout << ySet.getSize() << endl;

    ySet.addItem("hassan");
    cout << ySet.getSize() << endl;

    return 0;
}

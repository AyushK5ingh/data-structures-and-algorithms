#include<bits/stdc++.h>
using namespace std;

//unordered_set is a container that stores unique elements in no particular order
void explainUnorderedSet() {
    unordered_set<int> uset = {1, 2, 3, 4, 5};

    for (const auto& element : uset) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    
    cout << "Unordered Set Elements: ";
    explainUnorderedSet();

    return 0;
}
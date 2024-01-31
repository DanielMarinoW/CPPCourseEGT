#include <set>
#include <iostream>
#include <map>
using namespace std;

typedef multimap<int, double, less < int > > Mmid;
typedef multimap<int, int, less < int > > Count;
int main()
{
    
    map <int, int>counters;
   // Count counters;
    const int size = 15;

    int arr[size] = { 11,23,43,12,5,7,9,6,46,11,23,11,11,21,11};
    set<int> mySet;
    mySet.insert(arr,arr + size);
    
    for (int el : mySet) {
        cout << el << " ";
        counters[el] = 0;
    }
    cout << endl;

    for (pair<int,int> el : counters) {
        cout << el.first << " " << el.second << endl;
    }
    int counter = 0;
    

    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            counter++;
        }
        else {
            counter++;
            if (counters[arr[i]] < counter) {
                counters[arr[i]] = counter; 
            }
            counter = 0;
        }
      
    }
    counter++;
    if (counters[arr[size - 1]] < counter) {
        counters[arr[size - 1]] = counter;
    }
   
    for (pair<int, int> el : counters) {
        cout<<el.first << " -> " << el.second << endl;
    }
    return 0;
}

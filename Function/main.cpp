
#include <string>
#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>
using namespace std;

template <typename T > void printList(const list< T >& listRed);
int main()
{
     
    list<int>value;

    int number = 1;
    list<int> myList;

    while (number != 0) {
        cout << "Enter number" << endl;
        cin >> number;
        value.push_back(number);

    }

    int sum = 0;
    for (int i = 0; i < value.size(); i++) {
        sum = sum + value.front();
        value.pop_front();

    }
    cout << " " << sum << endl;

       
        int sum3 = 3;

        for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
            cout << *it << endl;
            sum3 = sum3 + *it;
        }

    }






    



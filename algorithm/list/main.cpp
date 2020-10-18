#include <iostream>
#include "listsolution.h"


int main()
{
    cout << "Hello World!" << endl;
    list<int> list1;
    list1.push_front(2);
    list1.push_front(5);
    list1.push_front(6);
    list1.push_front(6);
    list1.push_front(6);
    list1.push_front(8);
    list1.push_front(10);
    list1.push_front(12);
    list1.push_front(12);

    for(list<int>::iterator i = list1.begin(); i != list1.end(); ++i)
    {
        cout << *i << " ";
    }

    cout << "print finish >>>>>>>>>>>>>" << endl;
    removeDuplicatesFromSortedList(list1);

    for(list<int>::iterator i = list1.begin(); i != list1.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}

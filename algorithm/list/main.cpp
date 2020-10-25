
#include "stackaqueue.h"


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
    cout << "print finish >>>>>>>>>>>>>" << endl;
    for(list<int>::iterator i = list1.begin(); i != list1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "print finish >>>>>>>>>>>>>" << endl;
    removeDuplicatesFromSortedList(list1);

    for(list<int>::iterator i = list1.begin(); i != list1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    list<int> list2;
    list1.push_front(2);
    list1.push_front(5);
    list1.push_front(6);

    list<int> list3;
    list1.push_front(2);
    list1.push_front(5);
    list1.push_front(6);
    addList(list2, list3);

    cout << "print finish >>>>>>>>>>>>>" << endl;
    for(list<int>::iterator i = list2.begin(); i != list2.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    cout << "print finish >>>>>>>>>>>>>" << endl;

    list<int> list4;
    list4.push_front(2);
    list4.push_front(5);
    list4.push_front(6);
    printList(list4);

    int array[] = {45, 21, 30, 5, 96, 56, 10};
    cout << "max : " << findMaxNum(array, 7) << endl;

    sortStack(array, 7);
    return 0;
}

#ifndef LISTSOLUTION_H
#define LISTSOLUTION_H
#include <list>
#include <iostream>
using namespace std;

void removeDuplicatesFromSortedList(list<int>& srcList)
{
    if ( srcList.empty() ) return;
    list<int>::iterator itfirst = srcList.begin();
    list<int>::iterator itsecond  = itfirst++;
    while( itfirst != srcList.end() )
    {
        if ( *itfirst == *itsecond )
        {
            itfirst = srcList.erase(itfirst);
        }
        else
        {
            itsecond = itfirst;
            itfirst++;
        }
    }

}
void printList(list<int>& paralist)
{
    cout << " list content is >>>>>> " << endl;
    for(list<int>::iterator it = paralist.begin(); it != paralist.end(); ++it)
    {
        cout  << *it << " ";
    }
    cout << endl << " print list finish" << endl;
}
int  listToNumber(list<int>& paralist)
{
    int tmpNum = 0;
    int times  = 1;
    for(list<int>::iterator it = paralist.end(); it != paralist.begin(); --it)
    {

        tmpNum += (times*(*it));
        times *= 10;
    }
    return  tmpNum;
}
void addList(list<int> list1, list<int> list2)
{
//    if ( list1.empty() || list2.empty() )
//    {
//        for(list<int>::iterator iter = list2.begin(); iter != list2.end(); ++iter)
//        {
//            list1.push_back(*iter);
//        }
//        return;
//    }
    int list1ToNum = listToNumber(list1);
    int list2ToNum = listToNumber(list2);
    list1ToNum += list2ToNum;
    cout << "print sum >>>>>>>>>>>>>" << list1ToNum << endl;
    list1.clear();

    while(list1ToNum > 0 )
    {
       list1.push_front( list1ToNum % 10 );
       list1ToNum /= 10;
    }
    cout << "print finish >>>>>>>>>>>>>" << endl;
    for(list<int>::iterator i = list1.begin(); i != list1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "print finish >>>>>>>>>>>>>" << endl;
}
#endif // LISTSOLUTION_H

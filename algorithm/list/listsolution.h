#ifndef LISTSOLUTION_H
#define LISTSOLUTION_H
#include <list>

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

void addList(list<int>& list1, list<int>& list2)
{
    if ( list1.empty() || list2.empty() )
    {
        for(list<int>::iterator iter = list2.begin(); iter != list2.end(); ++iter)
        {
            list1.push_back(*iter);
        }
        return;
    }

}
#endif // LISTSOLUTION_H

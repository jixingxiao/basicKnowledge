#ifndef STACKAQUEUE_H
#define STACKAQUEUE_H
#include "listsolution.h"

#include <stack>

int findMaxNum(int* arr, int len)
{
    stack<int> valueStack;
    stack<int> maxStack;
    for(int i = 0; i < len; ++i)
    {
        if ( maxStack.empty() || maxStack.top() < arr[i] )
        {
            maxStack.push(arr[i]);
        }
        valueStack.push(arr[i]);

    }
    return maxStack.top();
}

void sortStack(int* array, int len)
{
    stack<int> ascendStack;
    stack<int> valueStack;
    ascendStack.push(array[0]);
    for(int i = 1; i < len; ++i)
    {
       if ( array[i] <= ascendStack.top() )
       {
           ascendStack.push(array[i]);
       }
       else
       {
           while(  !ascendStack.empty() && ascendStack.top() < array[i])
           {
               valueStack.push(ascendStack.top());
               ascendStack.pop();
           }
           ascendStack.push(array[i]);
           while( !valueStack.empty())
           {
              ascendStack.push(valueStack.top());
              valueStack.pop();
           }
       }
    }

    while(!ascendStack.empty())
    {
        cout << ascendStack.top() << " ";
        ascendStack.pop();
    }
    cout << endl;
}

#endif // STACKAQUEUE_H

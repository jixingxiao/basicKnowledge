﻿#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <ctype.h>
using  std::string;
/*example 1
 * input str 'I have 36 books, 40 pens2'
 * outout str 'I evah 36 skoob, 40 2snep'
*/

bool isNumber(string& str)
{
    double dTmpNum;
    int ret = sscanf_s(str.c_str(), "%lf", &dTmpNum);
    return ret != 0;
}
string reverseWordInStrign(const string& str)
{
    if ( str.empty() )
    {
        return string();
    }
    string retStr;
    string tmpStr;
    for(int i = 0; i < str.length(); ++i)
    {

        if ( isspace(str[i]) )
        {
            if ( isNumber(tmpStr) )
            {
                retStr += tmpStr;
            }
            else
            {
                for(int j = tmpStr.length() - 1; j >= 0; --j)
                {
                   retStr += tmpStr[j];
                }
            }
            tmpStr.clear();
            retStr += str[i];
            continue;
        }
        tmpStr += str[i];
     }
    return retStr += tmpStr;
}

/*
 * example 2 rotate string
 * input str 'abcdefg' offset 0 output 'abcdefg'
 * input str 'abcdefg' offset 1 output 'gabcdef'
 */
string rotateString(const string& str, int offset)
{
    if ( offset < 0 || offset > str.length() -1 )
    {
        return string();
    }
    string retStr;
    string s;
    s.assign(str, 0,offset);
    retStr += s;
    s.assign(str, offset, str.length() - offset);
    s += retStr;
    return s;
}

/*
 * merge sorted array
 */

int* mergeSortedArray(int* array1, int len1, int* array2, int len2)
{
    if (array1 == NULL || array2 == NULL )
    {
        return (array2 == NULL)? array1 : array2;
    }
    int len = len1 + len2;
    int* retArray = (int *)malloc(len*sizeof (int));
    if ( retArray == NULL )
    {
        return retArray;
    }

    while(len1 > 0 && len2 > 0 )
    {
        if ( array1[len1 - 1] < array2[len2 - 1] )
        {
             retArray[--len] = array2[--len2];
        }
        else
        {
            retArray[--len] = array1[--len1];
        }
    }
    while(len1 > 0 )
    {
         retArray[--len] = array1[--len1];
    }
    while(len2 > 0 )
    {
         retArray[--len] = array2[--len2];
    }
    return retArray;
}
int partitionArray(int* array, int len, int stdVal)
{
    if ( array == NULL ) return -1;
    int partPos = 0;
    while(partPos < len )
    {
        if ( array[len-1] <  stdVal)
        {
            int tmp = array[partPos];
            array[partPos++] = array[len-1];
            array[len-1] = tmp;
        }
        else
        {
            len--;
        }
    }
    return partPos;
}
void swap(int* array, int pos1, int pos2)
{
    int tmp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = tmp;
}
void quickSort(int* array, int start, int end)
{
    if(!(start < end)) return;
    int sPos = start;
    int mid = (sPos + end)/2;
    int stdPos =array[mid];
    swap(array, sPos, mid);
    for(int i = sPos+1; i <= end; ++i)
    {
        if( array[i] < stdPos )
        {
            swap(array, ++sPos, i);
        }
    }
    swap(array, start, sPos);
    quickSort(array, start, sPos-1);
    quickSort(array, sPos + 1, end);



}

#endif // SOLUTION_H

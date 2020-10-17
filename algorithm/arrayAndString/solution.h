#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <ctype.h>
using  std::string;
/*example
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

#endif // SOLUTION_H

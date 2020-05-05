/* 
 * File:   main.cpp
 * Author: Joshua
 *
 * Created on May 4, 2020, 4:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void NLMultiDimenArray(); //Nested Loop Multidimensional Array
        
int main(int argc, char** argv) {
    
    NLMultiDimenArray();

    return 0;
}
void NLMultiDimenArray()
{
    const int NumOfRows = 3, 
              NumOfColumns = 4;
    
    int array[NumOfRows][NumOfColumns] = {{34, -1, 879, 22},
                                          {24, 365, -101, -1},
                                          {-20, 40, 90, 97}};
    
    for(int i = 0; i < NumOfRows; ++i)
    {
        for(int j = 0; j < NumOfColumns; ++j)
        {
            cout<<"Integer ["<<i<<"]["<<j<<"] = "
                <<array[i][j]<<endl;
        }
    }
}


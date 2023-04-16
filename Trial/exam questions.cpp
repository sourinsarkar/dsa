// Input Specification:
// inputl: The value N
// input2: The value M
// input3: Array of size M containing the starting point of the
// connections
// input4: Array of size M containing the end point of the
// connections
// Output Specification:
// Return the type of topology the network represents.

// Example 1:
// inputl: 3
// input2.
// •3
// input3.
// input4.
// Output.
// •3

#include <stdio.h>
#include <string.h>
// Read only region start

int topologytype(int inputl, int input2, int input4[])
{
    // Read only region end
    // Write code here
    int i, j, k;
    int a[100][100];
    for (i = 0; i < inputl; i++)
    {
        for (j = 0; j < inputl; j++)
        {
            a[i][j] = 0;
        }
    }
    for (i = 0; i < input2; i++)
    {
        a[input4[i]][input4[i + 1]] = 1;
        a[input4[i + 1]][input4[i]] = 1;
        i++;
    }
    int flag = 0;
    for (i = 0; i < inputl; i++)
    {
        for (j = 0; j < inputl; j++)
        {
            if (a[i][j] == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        return 1;
    }
    else
    {
        return 3;
    }

    throw "Function topologytype(int inputl,int input2,int input3[],int input4[]) not implemented";
}
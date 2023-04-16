#include <iostream?
#include <vector>
using namespace std;


int kLargestElement(int len, int K, vector<int> arr)
{
    int kth,temp;
	int *rarr = (int*)malloc(sizeof(int)*(len)); 
    for(int i=0;i<len;i++)
        rarr[i]= arr[i];

    for(int i1 = 0; i1<len; i1++ )
    {
        for(int j1 = i1+1; j1<len; j1++)
        {
            if(rarr[i1]>rarr[j1])
            {
                    temp = rarr[i1];
                    rarr[i1] = rarr[j1];
                    rarr[j1] = temp;
            }
        }
    }
    kth=rarr[len-K];
    return kth;
}

void removeKLargestElement(int len, int K, vector<int> arr)
{
	vector<int> rarr1;
	if(K>0 && K <= len)
    {
        int i, kth;
        kth=kLargestElement(len, K, arr);
        int pos=0;
        for(int j1=0;j1<len;j1++)
        {
            if(arr[j1]==kth)
            {
                pos=j1;
                break;
            }    
        }
        for(i=pos;i<len-1;i++)
        {
            arr[i]=arr[i+1];
        }
        for(int i=0;i<len-1;i++)
        {
            cout<<arr[i];
            if(i<len-2)
            {
                cout<<" ";
            }    
        }   
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            cout<<arr[i];
            if(i<len-1)
            {
                cout<<" ";
            }    
        }
    } 
}
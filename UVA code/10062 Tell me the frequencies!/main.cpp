
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
	 int flag=0;
    while(getline(cin , str))
    {  int j;
       int arr[128] = {0};
       int n=str.size();
	  if(flag!=0)
		   cout <<endl;
    for(int i = 0 ;i<n ; i++)
    {
        arr[str[i]]++;
    }

    for( j = 1 ; j <= n ; j++)
    {
        for(int i = 128  ; i >= 32 ; i--)
        {
            if(arr[i] == j)
                cout << i << " " << j << endl;
        }
    }
	 flag=1;

    }
    return 0;
}


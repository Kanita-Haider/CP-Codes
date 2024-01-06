#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

   string X,Y;
   int length1, length2;

     
cin >>X;
cin >>Y;
// getline(cin,X);
// getline(cin,Y);
     length1 = X.size();

     length2 =Y.size();


    if(length1 < length2)
    cout << X;
    else
    cout << Y;
    return 0;
 }
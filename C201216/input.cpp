#include<bits/stdc++.h>
using namespace std;
/*
int main(){

   freopen("Input6.txt","w",stdout);
    int t,n,m,u,v;
      t=50;
         cout << t << endl;
    while (t--)
    {
        n = rand() % 10+1 ;
        while(1){
        m = rand() % 10 +1;
        if(m>n-2) break;
        }
        cout << n << " " << m << endl;

        int cnt=0;
        while(1)
        {   
            u = rand() % 10+1 ;
            v = rand() % 10+1;
            if(u<=n && v<=n)
            {
                cout <<u<< " " <<v<<endl;
                cnt++;
            }
            if(cnt==m) break;
        }
     cout<<""<<endl;
    }
   
    fclose(stdout);
    return 0;
}   


#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;

*/

// Function to generate random test cases
void generateTestCase(int n, int m) {
    srand(time(0)); // Seed the random number generator

    cout << "1" << endl; // Number of test cases

    cout << n << " " << m << endl; // Print n and m

    // Create a vector to track if an edge is already included
    vector<vector<bool>> edges(n + 1, vector<bool>(n + 1, false));

    // Generate m random edges
    for (int i = 0; i < m; i++) {
        int u, v;
        do {
            u = rand() % n + 1;
            v = rand() % n + 1;
        } while (u == v || edges[u][v] || edges[v][u]);
        
        edges[u][v] = edges[v][u] = true;
        cout << u << " " << v << endl;
    }
}


int main() {

    freopen("Input6.txt","w",stdout);

    int n = 100000; // Number of nodes
    int m = 100000; // Number of edges

    generateTestCase(n, m);

    fclose(stdout);

    return 0;
}

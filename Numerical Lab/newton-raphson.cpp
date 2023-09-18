#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;


double f(double x) {
    return x * x - 3*x + 2; 
}

double df(double x) {
    return 2 * x - 3; 
}

double newtonRaphson(double initial, double error, int maxIterations) {
    double x = initial;
    
    for (int i = 0; i < maxIterations; i++) {
        double fx = f(x);
        double dfx = df(x);
        
        if (fabs(dfx) < 1e-6) {
            return -1; 
        }
        
        double xNew = x - fx / dfx;
        
        if (fabs(xNew - x) < error) {
            return xNew; 
        }
        
        x = xNew;
    }
    
   
    return -1; 
}

int main() {

    double initial, error;
    int maxIterations;
    
    cin >>initial>>error>> maxIterations;
    
    double root = newtonRaphson(initial, error, maxIterations);
    
    if (root == -1) {
        cout << "Newton-Raphson method failed." << endl;
    } else {
        cout << "Approximate root: " << root << endl;
    }
    
    return 0;
}

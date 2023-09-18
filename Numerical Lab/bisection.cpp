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
    return x *x* x- x - 1; 
}

double bisection(double a, double b, double error) {
    double fa = f(a);
    double fb = f(b);
    
    
    while (abs(b - a)  >= error) {
        double mid = (a + b) / 2.0;
        double fmid = f(mid);
        
        if (fmid == 0) {
            return mid; 
        }
        
        if (fa * fmid < 0) {
            b = mid;
            fb = fmid;

        } else {
            a = mid;
            fa = fmid;
        }
    }
    
    return (a + b) / 2.0; 
}

int main() {
    double a, b, error ;
    
    cin >> a >> b >> error;
    
    
    double root = bisection(a, b, error);
    
    
        cout << "Approximate root: " << root << endl;
    
    
    return 0;
}

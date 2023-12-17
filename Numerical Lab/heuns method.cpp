#include<bits/stdc++.h>
using namespace std;

double f(double x, double y) {
    return (2*y)/x;  
}

vector<double> heunsMethod(double x0, double y0, double h, double x_target) {
    vector<double> results;
    double x = x0;
    double y = y0;

    while (x <= x_target) {
        results.push_back(y);

        double m1 = f(x, y);
        double y_e = y + h * m1;

        double m2 = 0.5 * (m1 + f(x + h, y_e));
        y = y + h * m2;

        x = x + h;
    }

    return results;
}

int main() {
    double x0 ;   cin>>x0;
    double y0 ;   cin>>y0;  
    double h ;     cin>>h;  
    double x_target ;  cin>>x_target; 

    vector<double> solution = heunsMethod(x0, y0, h, x_target);

    for (int i = 0; i < solution.size(); i++) {
        cout << "x = " << x0 + i * h << ", y = " << solution[i] << endl;
    }

    return 0;
}

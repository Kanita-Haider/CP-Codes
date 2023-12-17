#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the first derivative using Newton's forward differentiation
double forwardDifferenceFirstDerivative(vector<double>& x, vector<double>& y, double xi) {
    int n = x.size();
    if (n != y.size()) {
        cerr << "Error: x and y vectors must have the same size." << endl;
        return 0.0;
    }

    double result = 0.0;

    double h = x[1] - x[0];  // Step size
    double rho = (xi - x[0]) / h;  // Calculate rho

    double term = 1.0;
    for (int i = 1; i < n; i++) {
        result += term * y[i];
        term *= (rho - i + 1) / (i + 1);
    }

    result = (result - y[0]) / h;  // Apply the scaling factor

    return result;
}

// Function to calculate the second derivative using Newton's forward differentiation
double forwardDifferenceSecondDerivative(vector<double>& x, vector<double>& y, double xi) {
    int n = x.size();
    if (n != y.size()) {
        cerr << "Error: x and y vectors must have the same size." << endl;
        return 0.0;
    }

    double result = 0.0;

    double h = x[1] - x[0];  // Step size
    double rho = (xi - x[0]) / h;  // Calculate rho

    double term = 1.0;
    for (int i = 1; i < n; i++) {
        result += term * y[i];
        term *= (rho - i + 1) / (i + 1);
    }

    result = (result - y[0]) / (h * h);  // Apply the scaling factor

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double xi;
    cin >> xi;

    double firstDerivative = forwardDifferenceFirstDerivative(x, y, xi);
    double secondDerivative = forwardDifferenceSecondDerivative(x, y, xi);

    cout << "First Derivative at x = " << xi << ": " << firstDerivative << endl;
    cout << "Second Derivative at x = " << xi << ": " << secondDerivative << endl;

    return 0;
}

#include <iostream>
#include <cmath>
#include <iomanip>

// Function to calculate the k-th term of the series
double term(double x, int k) {
    return (2 * k + 1) * pow(x, 2 * k) / tgamma(k + 1);
}

// Function to calculate the series sum with a fixed number of terms n
double sum1(double x, int n) {
    double z = 0.0;
    for (int k = 0; k <= n; ++k) {
        z += term(x, k);
    }
    return z;
}

// Function to calculate the series sum with a specified precision eps
double sum2(float x, float eps) {
    double z = 0.0, ak = 1.0;
    int k = 0;

    while (fabs(ak) > eps) {
        ak = term(x, k);
        z += ak;
        k++;
    }

    return z;
}

// Function to calculate the exact value of y(x)
double y(double x) {
    return (1 + 2 * x * x) * exp(x);
}

int main() {
    double x1 = 0.0, x2 = 1.0; // Range for x
    int n; // Number of terms for fixed n calculation
    float delta; // Desired accuracy
    int k = 10; // Number of points

    // Take input for n and delta
    std::cout << "Enter the number of terms n: ";
    std::cin >> n;
    std::cout << "Enter the accuracy delta: ";
    std::cin >> delta;

    // Print table header
    std::cout << std::setw(10) << "x"
              << std::setw(15) << "Sn (Fixed n)"
              << std::setw(15) << "Se (Accuracy)"
              << std::setw(15) << "y(x)" << std::endl;
    std::cout << std::string(55, '-') << std::endl;

    // Loop to calculate and print values for each x
    for (int j = 1; j <= k; ++j) {
        double x = x1 + (x2 - x1) * (j - 1) / 9;
        double sn = sum1(x, n);          // Sum with fixed n terms
        double se = sum2(x, delta);      // Sum with specified accuracy
        double exact = y(x);             // Exact value of the function

        // Print values in table format
        std::cout << std::setw(10) << x
                  << std::setw(15) << sn
                  << std::setw(15) << se
                  << std::setw(15) << exact << std::endl;
    }

    return 0;
}

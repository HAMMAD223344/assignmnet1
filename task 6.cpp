#include <iostream>
using namespace std;

int main() {
    // Initialize dividend and divisor
    int dividend ;
    
	cout<<"enter the dividend";
    cin>>dividend;
    int divisor ;
    cout<<"enter the divisor";
    cin>>divisor;

    // Initialize quotient
    int quotient = 0;

    // Perform division without using /
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    // Display the final result
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}


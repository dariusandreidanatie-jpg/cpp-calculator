#include <iostream>
using namespace std;

bool is_prime(int cooki) {
    if (cooki == 2) {return true;}
    if (cooki % 2 == 0) {return false;}

    for (int dih = 3; dih * dih <= cooki; dih += 2) {
        if (cooki % dih == 0) {return false;}
    }

    return true;
}

int main() {
    int a, b;

// number a

    cout << "Enter Number 1: ";
    cin >> a;

//number b

    cout << "Enter Number 2: ";
    cin >> b;

    cout << "-----------------------------------------" << endl;
//biggest num a or b

    int max1 = a;

    if (b > max1) {
        max1 = b;
    }

    cout << "Biggest Number: " << max1 << endl;

//smallest num a or b    

    int less1 = a;

    if (b < less1) {
        less1 = b;
    }

    cout << "Smallest Number: " << less1 << endl;

//compare a & b

    cout << "Comparison: " << less1 << " is smaller than " << max1 << " (" << less1 << " < " << max1 << ")" << endl;

//sum of a & b

    int s = a + b;

    cout << "The Sum: " << s << " (" << a << " + "<< b << ")" << endl;

//subtract of a & b

    int sb = a - b;
    int sbp = b - a;

    cout << "Subtraction: " << sb << " (" << a << " - "<< b << ")" << endl;

    if ( sb < 0) {
         cout << "(Positive) Subtraction: " << sbp << " (" << b << " - "<< a << ")" << endl;
    }

//multiply a & b

    int m = a*b;

    cout << "Multiplication: " << m << " (" << a << " x "<< b << ")" << endl;


//division a & b

    double ddiv = (double)a / b;

    cout << "Division: " << ddiv << " (" << a << " / "<< b << ")" << endl;

//divisible a&b

    if (a > 0 && b > 0) {
        if ( a % b == 0) {
            cout << a << " and " << b << " are divisible!" << endl;
        }
        if (b % a == 0) {
            cout << b << " and " << a << " are divisible!" << endl;
        }
    }
    else {
        cout << a << " and " << b << " are NOT divisible :(" << endl;
    }

//prime number a & b

    if (a > 0 && b > 0) {
        if (is_prime(a)) {
            cout << a << " is a prime number." << endl;
        }
        else {
            cout << a << " isn't a prime number." << endl;
        }

        if (is_prime(b)) {
            cout << b << " is a prime number." << endl;
        }
        else {
            cout << b << " isn't a prime number." << endl;
        }
    }

    return 0;
}
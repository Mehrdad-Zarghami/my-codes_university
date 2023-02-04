#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int wnum = 5;
    double dnum = 8.5;



    cout << 10 + 6 << endl;

    cout << 10 * 6 << endl;

    cout << 10 / 4 << endl; // the result would be an integer: 2
    cout << 10.0 / 4 << endl; //the result would be decimal number (exact answer): 2.5 --> same as: 10 / 4.0 , 10.0 / 4.0 , 10. / 4 , ... 
        
    cout << 10 % 6 << endl; // return the remainder: 4 --> both numbers should be integers

    wnum ++; // wnum++ or wnum -- : increment or decrement by 1   
    cout <<"wnum after increment: " <<  wnum << endl;

    dnum -- ;
    cout << "dnum after decrement: " << dnum << endl;

    wnum += 20 ; // --> wnum = wnum + 80 . We also have: -= /= *=
    cout <<"wnum after the += operation: " << wnum << endl;

    // Functions that are in cmath library:
    cout << "2 to the power of 5: pow(2, 5): "<< pow(2, 5) << endl;
    cout << "squered root of 36: sqrt(36): " << sqrt(36) << endl;
    cout << "round(3.6): " << round(3.6) << endl ;
    cout << "round(3.4): " << round(3.4) << endl;
    cout << "floor(3.8): " << floor(3.8) << endl;
    cout << "maximum of 2 input numbers: fmax(3:10) --> "<< fmax(3, 10)<< endl;
    cout << "minimum of 2 input numbers: fmin(3:10) --> "<< fmin(3, 10)<< endl; 



    


    return 0;
}
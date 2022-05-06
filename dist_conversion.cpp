#include <iostream>
using namespace std;
class dist
{
private:
    float km;

public:
    void conversion();
};
void dist :: conversion()
{
    cout << "Enter the distance in kilometer: " << endl;
    cin >> km;
    float m = km * 1000;
    float cm = m * 100;
    float inch = cm / 2.54;
    float ft = inch / 12;
    cout << "Distance in meters: " << m << endl;
    cout << "Distance in centimeters: " << cm << endl;
    cout << "Distance in inches: " << inch << endl;
    cout << "Distance in feets: " << ft << endl;
}
int main()
{
    dist d;
    d.conversion();
    return 0;
}
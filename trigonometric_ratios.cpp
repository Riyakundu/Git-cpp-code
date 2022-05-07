#include <iostream>
#include <cmath>
using namespace std;
class trigonometric
{
private:
    float angle;
    float const pi = 3.14159;

public:
    void trigono();
};
void trigonometric::trigono()
{
    cout << "Enter any angle(in degree): " << endl;
    cin >> angle;
    float rad = (angle) * (pi / 180.0);
    cout << "Value for sin(" << angle << ")= " << sin(rad) << endl;
    cout << "Value for cos(" << angle << ")= " << cos(rad) << endl;
    cout << "Value for tan(" << angle << ")= " << tan(rad) << endl;
    cout << "Value for cosec(" << angle << ")= " << (1 / sin(rad)) << endl;
    cout << "Value for sec(" << angle << ")= " << (1 / cos(rad)) << endl;
    cout << "Value for cot(" << angle << ")= " << (1 / tan(rad)) << endl;
}
int main()
{
    trigonometric degree;
    degree.trigono();
    return 0;
}
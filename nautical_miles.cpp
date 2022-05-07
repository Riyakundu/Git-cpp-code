#include <iostream>
#include <cmath>
using namespace std;
class nautical
{
private:
    float l1, l2, g1, g2, d;
    const float pi = 3.141592;

public:
    void distance();
};
void nautical::distance()
{
    cout << "Enter latitude: " << endl;
    cin >> l1 >> l2;
    cout << "Enter longitude: " << endl;
    cin >> g1 >> g2;
    l1 = l1 * (pi / 180.0);
    l2 = l2 * (pi / 180.0);
    g1 = g1 * (pi / 180.0);
    g2 = g2 * (pi / 180.0);
    d = (3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1)));
    cout << "The distance in nautical miles is " << d << endl;
}
int main()
{
    nautical dist;
    dist.distance();
    return 0;
}
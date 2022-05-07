#include <iostream>
#include <cmath>
using namespace std;
class wind_chill
{
private:
    float temp, vel;

public:
    void wcfactor();
};
void wind_chill::wcfactor()
{
    cout << "Enter the temperature: " << endl;
    cin >> temp;
    cout << "Enter the wind velocity: " << endl;
    cin >> vel;
    float wcf = 35.74 + (0.6215 * temp) + ((0.4275 * temp - 35.75) * pow(vel, 0.16));
    cout << "The wind chill factor value is= " << wcf << endl;
}
int main()
{
    wind_chill w;
    w.wcfactor();
    return 0;
}
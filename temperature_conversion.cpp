#include <iostream>
using namespace std;
class temp
{
private:
    float fahr;

public:
    void centi();
};
void temp ::centi()
{
    cout << "Enter the temperature in fahrenhite in degrees: " << endl;
    cin >> fahr;
    float ce = ((fahr - 32) * 5) / 9;
    cout << "After conversion into centigrade the temperature is " << ce << "degree" << endl;
}
int main()
{
    temp fahr;
    fahr.centi();
    return 0;
}
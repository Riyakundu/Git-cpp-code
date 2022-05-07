#include <iostream>
#include <cmath>
using namespace std;
class coordinate
{
private:
    int x, y;

public:
    void polar();
};
void coordinate ::polar()
{
    cout << "Enter cartesian coordinate x: " << endl;
    cin >> x;
    cout << "Enter cartesian coordinate y: " << endl;
    cin >> y;
    float r = sqrt(x * x + y * y);
    float theeta = atan(y / x);
    float ang = theeta * (180 / 3.14);
    cout << "The polar co-ordinate is= "
         << "r= " << r << " theta= " << ang << endl;
}
int main()
{
    coordinate p;
    p.polar();
    return 0;
}
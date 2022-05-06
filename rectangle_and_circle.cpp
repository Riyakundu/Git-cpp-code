#include <iostream>
using namespace std;
class calculate
{
private:
    float len, br, rad;

public:
    void circle();
    void rectangle();
};
void calculate ::circle()
{
    cout << "Enter the radius of the circle: " << endl;
    cin >> rad;
    float are = (3.14) * (rad) * (rad);
    float cir = 2 * (3.14) * (rad);
    cout << "The area of the circle is= " << are << endl;
    cout << "The circumference of the circle is= " << cir << endl;
}
void calculate ::rectangle()
{
    cout << "Enter the length and breadth of the rectangle: " << endl;
    cin >> len >> br;
    float area = 2 * len * br;
    float peri = 2 * (len + br);
    cout << "The area of the rectangle is= " << area << endl;
    cout << "The perimeter of the rectangle is= " << peri << endl;
}
int main()
{
    calculate c, r;
    c.circle();
    r.rectangle();
    return 0;
}
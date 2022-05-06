#include <iostream>
using namespace std;
class salary
{
private:
    float bs, drl, hr, gr;

public:
    void calculate();
};
void salary ::calculate()
{
    cout << "Enter the basic salary of Ramesh: " << endl;
    cin >> bs;
    drl = 0.4 * bs;
    hr = 0.2 * bs;
    gr = bs + drl + hr;
    cout << "The basic salary of Ramesh= " << bs << endl;
    cout << "The dearness allowence= " << drl << endl;
    cout << "The house rent allowence= " << hr << endl;
    cout << "The gross salary of Ramesh= " << gr << endl;
}
int main()
{
    salary s;
    s.calculate();
    return 0;
}
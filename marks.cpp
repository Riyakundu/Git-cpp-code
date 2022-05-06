#include <iostream>
using namespace std;
class marks
{
private:
    float a, b, c, d, e;

public:
    void calculation();
};
void marks ::calculation()
{
    cout << "Enter marks for 5 different subjects: " << endl;
    cin >> a >> b >> c >> d >> e;
    float aggr = a + b + c + d + e;
    float perc = aggr / 5;
    cout << "Aggregate marks= " << aggr << endl;
    cout << "Percentage marks= " << perc << endl;
}
int main()
{
    marks stu;
    stu.calculation();
    return 0;
}
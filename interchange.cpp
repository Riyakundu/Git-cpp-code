#include <iostream>
using namespace std;
class interchange
{
private:
    int C, D;

public:
    void inter_change();
};
void interchange::inter_change()
{
    cout << "Enter value for C: " << endl;
    cin >> C;
    cout << "Enter value for D: " << endl;
    cin >> D;
    cout << "Before interchanging the value of C and D are " << C << ", " << D << " respectively" << endl;
    int temp = C;
    C = D;
    D = temp;
    cout << "After interchanging the value of C and D are " << C << ", " << D << " respectively" << endl;
}
int main()
{
    interchange in;
    in.inter_change();
    return 0;
}
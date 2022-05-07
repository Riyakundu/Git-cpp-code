#include <iostream>
#include <cmath>
using namespace std;
class reverse
{
private:
    int n, temp, r, s = 0;

public:
    void rev_num();
};
void reverse ::rev_num()
{
    cout << "Enter any number: " << endl;
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        temp = temp / 10;
        s = (s * 10) + r;
    }
    cout << "The reverse of " << n << " is= " << s << endl;
}
int main()
{
    reverse num;
    num.rev_num();
    return 0;
}
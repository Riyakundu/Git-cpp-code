#include <iostream>
using namespace std;
class digit
{
private:
    int n,temp, s = 0;

public:
    void sumdigit();
};
void digit ::sumdigit()
{
    cout << "Enter any number: " << endl;
    cin >> n;
    temp=n;
    while (temp != 0)
    {
        int r = temp % 10;
        temp = temp / 10;
        s = s + r;
    }
    cout << "The sum of digits of " << n << " is= " << s << endl;
}
int main()
{
    digit d;
    d.sumdigit();
    return 0;
}
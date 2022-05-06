#include <iostream>
using namespace std;
class paper
{
private:
    int n;

public:
    void size();
};
void paper ::size()
{
    cout << "Enter the number upto which you want to calculate size: " << endl;
    cin >> n;
    int l = 1189, b = 841;
    for (int i = 0; i <= n; i++)
    {
        cout << " A[" << i << "]= " << l << "mm*" << b << "mm" << endl;
        int nl = l / 2;
        l = b;
        b = nl;
    }
}
int main()
{
    paper dim;
    dim.size();
    return 0;
}
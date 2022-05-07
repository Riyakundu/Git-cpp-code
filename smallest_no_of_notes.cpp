#include <iostream>
using namespace std;
class notes
{
private:
    int amount;

public:
    void note_count();
};
void notes::note_count()
{
    int s = 0;
    cout << "Enter the sum of Rs.: " << endl;
    cin >> amount;
    int amt = amount;
    s = s + (amount / 100);
    amount = amount % 100;
    s = s + (amount / 50);
    amount = amount % 50;
    s = s + (amount / 10);
    amount = amount % 10;
    s = s + (amount / 5);
    amount = amount % 5;
    s = s + (amount / 2);
    amount = amount % 2;
    s = s + (amount / 1);
    amount = amount % 1;
    cout << "The smallest number of notes that will combine to give Rs. is " << s << endl;
}
int main()
{
    notes n;
    n.note_count();
    return 0;
}
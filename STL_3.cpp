#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "Functors.h"



class Functor : public Min, public Max, public SortUp, public SortDown, public SizeUp, public SizeDown, public Delete
{
public:
    void Print(vector<int>& numbers)
    {
        cout << "Min: " << Min::operator()(numbers) << endl;
        cout << "Max: " << Max::operator()(numbers) << endl;

        cout << "Sort up: ";
        SortUp::operator()(numbers);
        for (int i : numbers)
        {
            cout << i << " ";
        }
        cout << endl;

        SortDown obj;
        cout << "Sort down: ";
        sort(numbers.begin(), numbers.end(), obj);
        for (int i : numbers)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "Size up: " << SizeUp::operator()(numbers, 4) << endl;
        cout << "Size down: " << SizeDown::operator()(numbers, 4) << endl;

        cout << "Delete ur num: ";
        Delete::operator()(numbers, 8);
        for (int i : numbers)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> numbers = { 5, 3, 8, 1, 7, -123213 };
    Functor obj;
    obj.Print(numbers);

}

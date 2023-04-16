#pragma once
class Min
{
public:
    int operator()(const vector<int>& numbers)
    {
        return *min_element(numbers.begin(), numbers.end());
    }
};

class Max
{
public:
    int operator()(const vector<int>& numbers)
    {
        return *max_element(numbers.begin(), numbers.end());
    }
};

class SortUp
{
public:
    void operator()(vector<int>& numbers)
    {
        sort(numbers.begin(), numbers.end());
    }
};

class SortDown
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

class SizeUp
{
public:
    int operator()(vector<int>& numbers, int num_temp)
    {
        const int num = num_temp + numbers.size();
        numbers.resize(num);
        return numbers.size();
    }
};

class SizeDown
{
public:
    int operator()(vector<int>& numbers, int num_temp)
    {
        const int num = numbers.size() - num_temp;
        numbers.resize(num);
        return numbers.size();
    }
};

class Delete
{
public:
    void operator()(vector<int>& numbers, int num)
    {
        numbers.erase(remove(numbers.begin(), numbers.end(), num), numbers.end());
    }
};
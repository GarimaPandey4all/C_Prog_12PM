#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1;

    cout<<"Size is:"<<v1.size()<<endl;
    cout<<"Capacity is:"<<v1.capacity()<<endl;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(10 * (i + 1));
    }

    cout<<"Size is:"<<v1.size()<<endl;
    cout<<"Capacity is:"<<v1.capacity()<<endl;

    for(int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }

    return 0;
}

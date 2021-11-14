#include <iostream>
#include <vector>

using namespace std;
//
//vector: It supports dynamic Array.
//vector can provide memory flexibility.

int main()
{
    vector <int> v1;

    cout<<"Current Capacity is: "<<v1.capacity()<<endl;

    vector <int> v2 {10, 20, 30};

    cout<<"Current Capacity is: "<<v2.capacity()<<endl;

    return 0;
}

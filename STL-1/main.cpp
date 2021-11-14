#include <iostream>
#include <array>

using namespace std;

//STL - Standard Template Library - Predefined Classes

// 1. Container
// 2. Algorithm
// 3. Iterator

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    array<int, 5> arr2 = {10, 20, 30, 40, 50};

    //[]
    cout<<arr[0]<<endl;

    //at()
    cout<<arr.at(2)<<endl;

    //front()
    cout<<arr.front()<<endl;

    //back()
    cout<<arr.back()<<endl;

    //fill()

    arr.fill(50);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"  ";
    }

    //swap()

    arr.swap(arr2);

    cout<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<"  ";
    }
    cout<<endl;
    cout<<arr.size()<<endl;
    cout<<arr2.size()<<endl;

    return 0;
}

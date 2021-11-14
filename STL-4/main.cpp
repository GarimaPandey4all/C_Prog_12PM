#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v1 (5, 10); // 5 - size, value at all places is 10
    vector <string> v2(5, "hi");

    cout<<v2[3]<<endl;
    cout<<v2[1]<<endl;

    cout<<v1.at(0)<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;

    return 0;
}

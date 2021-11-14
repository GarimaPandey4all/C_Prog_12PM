#include <iostream>
#include <tuple>

using namespace std;

//tuple - row or record

int main()
{
    tuple <string, int, int> t1;
    tuple <float, int, string> t2;

    //insert into a tuple

    t1 = make_tuple("New Delhi", 25, 3847905874);
    t2 = make_tuple(4735.78, 30, "Ram Kumar");

    //Accessing from a tuple

    cout<<"Tuple 1:"<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<endl;
    cout<<"Tuple 2:"<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2);

    return 0;
}

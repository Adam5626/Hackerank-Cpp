#include <iostream>
using namespace std;


void update(int *a,int *b) {
    int temp = *a;
    *a = temp + *b;
    *b = abs(*b - temp);
}


int main()
{

    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<a<<endl;
    cout<<b<<endl;

    return 0;

}
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    clock_t start = clock() ;

    /*
    Your Stuff / Code
    */

    cout.precision(3);
    cout<<"\nExecution Time : "<<fixed<< float( clock() - start ) / CLOCKS_PER_SEC <<" sec\n";
    return 0;
}
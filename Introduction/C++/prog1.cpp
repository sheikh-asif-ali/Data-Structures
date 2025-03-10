//max value of signed & unsigned integer pointer using new operator
#include <iostream>
#include <climits> 
using namespace std;

int main()
{
    int* signedptr = new int;
    *signedptr = INT_MAX;
    unsigned int* unsignedptr = new unsigned int;
    *unsignedptr = UINT_MAX;

    cout<<"Assignment using 'new' operator."<<endl
        <<"Max signed integer is "<<*signedptr<<endl
        <<"Max un-signed integer is "<<*unsignedptr<<endl;
    delete signedptr,unsignedptr;

    return 0;
}

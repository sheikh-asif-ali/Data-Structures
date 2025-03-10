#include <iostream>
#include <any>
using namespace std;

int main()
{
    any ref_var;

    ref_var = 786;
    cout<<"Integer Value is: "<< any_cast<int>(ref_var)<<endl;

    ref_var = 33.33;
    cout<<"Double Value is: "<< any_cast<double>(ref_var)<<endl;

    ref_var = string("Prog 4");
    cout<<"String Value is: " << any_cast<string>(ref_var)<<endl;
    
    return 0;
}
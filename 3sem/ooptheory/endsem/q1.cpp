#include<iostream>
using namespace std;
class FRACTION
{   
    public:
    int numer, denom;
    void get(int i, int j)
    {
        numer=i; denom=j;
    }
    FRACTION add(FRACTION X)
    {
        FRACTION temp;
        temp.numer= (numer*X.denom + X.numer*denom);
        temp.denom= (denom*X.denom);
        return temp;
    }
    FRACTION subtract(FRACTION *X)
    {
        FRACTION temp;
        temp.numer= (numer * X->denom - X->numer * denom);
        temp.denom= (denom * X->denom);
        return temp;
    }
  /*  FRACTION multiplication(FRACTION &X)
    {
        FRACTION temp;
        temp.numer = numer * X.numer;
        temp.denom = denom * X.denom;
        return temp;
    }*/
};
int main()
{
    FRACTION X, Y, Z;
    int i, j;
    cout<<"\nEnter numerator and denominator of fraction 1 : ";
    cin>>i>>j;
    X.get(i, j);
    cout<<"\nEnter numerator and denominator of fraction 2 : ";
    cin>>i>>j;
    Y.get(i, j);
    Z=X.add(Y);
    cout<<"\nAddtion of the two frations will be:  "<<Z.numer<<"/"<<Z.denom<<endl;
    Z=X.subtract(&Y);
    cout<<"\nSubtractoin of the two frations will be:  "<<Z.numer<<"/"<<Z.denom<<endl;
   // Z=X.multiplication(Y);
    //cout<<"\nMultiplicaton of the two frations will be:  "<<Z.numer<<"/"<<Z.denom<<endl;

    return 0;
}

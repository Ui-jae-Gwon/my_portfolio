#include <iostream>
using namespace std;

int main(void)
{
    int total_price, product_type, product_price, product_cnt, dummy;

    cin >> total_price >> product_type;

    dummy=0;

    for(int i=0; i<product_type; i++)
    {
        cin>> product_price >> product_cnt;

        dummy=product_price*product_cnt+dummy;
    }

    if(dummy==total_price)
    {
        cout << "Yes";
    }
    else
    cout << "No";
}
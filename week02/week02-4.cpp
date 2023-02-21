#include <iostream>//改用C++來寫
using namespace std;
int main()
{
    long long int a, b;//64位元

    while(cin >> a >> b)
    {
        long long int ans = a-b;
        if( ans<0 ) ans = b-a;
        cout << ans << endl;
    }
}

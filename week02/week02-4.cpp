#include <iostream>//���C++�Ӽg
using namespace std;
int main()
{
    long long int a, b;//64�줸

    while(cin >> a >> b)
    {
        long long int ans = a-b;
        if( ans<0 ) ans = b-a;
        cout << ans << endl;
    }
}

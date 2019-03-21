#include <bits/stdc++.h>
using namespace std;
int n;
int a[10001], sum = 0;
void getBa()
{
    cout << "Average: " << sum / n << " or " << sum << "/" << n << endl;
}
void getZhongShu()
{
    /*function*/
}
void getZhongWeiShu()
{
    cout << "Middle of the array: ";
    if(n % 2 == 1)
    {
        cout << a[n / 2 + 1] << endl;
    }else
    {
        cout << (a[n / 2] + a[n / 2 + 1]) / 2 << endl;
    }
}
void getFangCha(){
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += pow(a[i] - (sum / n), 2);
    }
    cout << "S: " << s / n << endl;
}
int main()
{
    cout << "Enter the number of array?" << endl;
    cin >> n;
    cout << "Enter all of the array" << endl;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a + 1, a + 1 + n);
    getBa();
    getZhongShu();
    getZhongWeiShu();
    getFangCha();
    cout << "Sorted Array: ";
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    int a;
    int sum = 0;
    cout << "Please input a value: " << endl;
    while (1)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        else
            sum += a;
        cout << "The sum of values you has inputted in is: " << sum ;
    };    
    cout << "THK U";
    return 0;
}
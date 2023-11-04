
#include <bits/stdc++.h>
using namespace std;

void Toh(int n, char left_rod, char right_rod,
                char mid_rod)
{
    if (n == 0) {
        return;
    }
    Toh(n - 1, left_rod, mid_rod, right_rod);
    cout << "Move disk " << n << " left rod " << left_rod
        << " to rod " << right_rod << endl;
    Toh(n - 1, mid_rod, right_rod, left_rod);
}

int main()
{
cout<<"Enter number of disks :";
int n;
cin>>n;
    Toh(n, 'A', 'C', 'B');
    return 0;
}

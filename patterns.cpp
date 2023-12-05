#include <iostream>
using namespace std;
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // another method
    // for (int i = n; i >= 0; i--)
    // {
    //     for (int j = 0; j < i;  j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}

void pattern6(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // for (int j = 0; j < n-i-1; j++){
        //     cout << " ";
        // }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n-i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // another method
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern13(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j < 2 * n - (2 * i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    int digit = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << digit << " ";
            digit++;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    char alpha = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(alpha + j - 1) << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        int breakPoint = (2 * i + 1) / 2;
        char ch = 'A';
        for (int j = 1; j <= 2 * i + 1; j++)
        {

            cout << ch;
            if (j <= breakPoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    // for (int i=0; i<n; i++){
    //     for (char ch = ('A' + n -1)-i; ch <= ('A'+ n -1); ch++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n;
        for (int j = 1; j <= i; j++)
        {
            ch--;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
    iniS = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}

void pattern21(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= n - i + 'A'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern24(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern25(int n)
{    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        for (int j=0; j<iniS; j++){
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        iniS +=2;
        cout << endl;
        
    }
    iniS = 2*n-2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        for (int j=0; j<iniS; j++){
            cout << " ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        iniS -=2;
        cout << endl;
        
    }
}

void pattern26(int n){
    int spaces = 2*n-2;
    for (int i=1; i<=2*n-1;i++){
        int stars = i;
        if (i>n) stars = 2*n-i;
        //stars
        for (int j=1; j<=stars; j++){
            cout << "*";
        }
        //spaces
        for (int j=1; j<=spaces; j++){
            cout << " ";
        }
        //stars
        for (int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
        if (i<n) spaces -=2;
        else spaces +=2;
    }
}

void pattern27(int n){
    // int spaces = 2*n-2;
    for (int i=1; i<=2*n-1;i++){
        int stars = i;
        if (i>n) stars = 2*n-i;
        //stars
        for (int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
        // //spaces
        // for (int j=1; j<=spaces; j++){
        //     cout << " ";
        // }
        // //stars
        // for (int j=1; j<=stars; j++){
        //     cout << "*";
        // }
        // cout << endl;
        // if (i<n) spaces -=2;
        // else spaces +=2;
    }
}

void pattern28(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if(i==1 || i==n ||j==1 || j==n) cout << "*";
            else cout << " ";
            
        }
        cout << endl;
    }
    
}



void pattern29(int n){
    for (int i=0; i<2*n-1; i++){
        for (int j=0; j< 2*n-1; j++){
            int top = i;
            int left= j;
            int right = (2*n -2) -j;
            int down = (2*n-2)-i;
            cout<< (n- min(min(top,down), min(left, right))) << " ";
        }
        cout << endl;
    }
}

    int main()
    {
        int t;
        cin >> t;
        int n;
        for (int i = 0; i < t; i++)
        {

            cin >> n;
            pattern29(n);
        }

        return 0;
    }
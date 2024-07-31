#include <bits/stdc++.h>

using namespace std;
int binary_to_decimal(string &binary)
{
    int n = binary.size();
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int num = binary[i] - '0';
        res += num * (1 << (n - i - 1));
    }
    return res;
}

string decimal_to_binary(int x)
{
    string s = "";
    while (x >= 1)
    {
        int k = x % 2;
        s += '0' + k;
        x = x / 2;
    }
    // s +='0'+1;
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;

    string n1 = to_string(num1);
    string n2 = to_string(num2);

    int size = n1.length();

    string res = "";

    for(int i=0;i<size;i++){
        int x =( stoi(n1[i]))^(stoi(n2[i]));
    }
}
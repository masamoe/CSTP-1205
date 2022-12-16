#include <iostream>
#include <string>
#include <vector>

using namespace std;

// int numberOfStrings(string &S, vector<string> &L)
// {
//     int maxStrings = 0;
//     for (const auto &i : L)
//     {
//         int count = 0;
//         for (int j = 0; j <= S.length(); j++)
//         {
//             if (S.length() < i.length())
//             {
//                 count = 0;
//             }
//             else if (S[j] == i[0])
//             {
//                 if (S[j + 1] == i[1])
//                 {
//                     count++;
//                     j++;
//                 }
//             }
//         }
//         if (count > maxStrings)
//         {
//             maxStrings = count;
//         }
//     }
//     return maxStrings;
// }

void reverseInteger(int N)
{
    int enable_print = N % 10;
    while (N > 0)
    {
        if (enable_print == 0 && N % 10 != 0)
        {
            enable_print = 1;
            cout << N % 10;
        }
        else if (enable_print == 1)
        {
            cout << N % 10;
        }
        N /= 10;
    }
}

int main()
{
    
}

// string blocks[40] = {};
// int count = 0;
// string temp = "";
// int max = 0;
// int solution = 0;
// for (int i = 0; i < S.length(); i++)
// {
//     if (S[i] == S[i + 1])
//     {
//         temp += S[i];
//         temp += S[i + 1];
//         blocks[count] = temp;
//         count++;
//         temp = "";
//         i++;
//     }
//     else
//     {
//         temp += S[i];
//         blocks[count] = temp;
//         count++;
//         temp = "";
//     }
// }
// for (const auto &i : blocks)
// {
//     if (i.length() > max)
//     {
//         max = i.length();
//     }
// }
// for (const auto &i : blocks)
// {
//     solution += max - i.length();
// }
// return solution;

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;

        char arr[n];

        int freq[26] = {0};

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if(arr[i] >= 'a' && arr[i] <= 'z')
                freq[arr[i] - 'a']++;

            else if(arr[i] >= 'A' && arr[i] <= 'Z')
                freq[arr[i] - 'A']++;
        }

        int maxFreq = 0;
        char maxChar;

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > maxFreq)
            {
                maxFreq = freq[i];
                maxChar = i + 'a';
            }
        }

        cout << "Alphabet with maximum occurrence: "
             << maxChar << endl;

        cout << "Number of occurrences: "
             << maxFreq << endl;
    }

    return 0;
}

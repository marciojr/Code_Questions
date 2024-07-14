#include <bits/stdc++.h>

using namespace std;

typedef int Integer;

Integer main()
{
    Integer time;
    cin >> time;

    for (Integer l = 0; l < time; l++)
    {
        Integer n, m, k;
        cin >> n;
        cin >> m;
        cin >> k;

        bool arr[n][m];

        for (Integer i = 0; i < n; i++)
        {
            char line[m + 1];
            cin >> line;
            for (Integer j = 0; j < m; j++)
            {
                arr[i][j] = (line[i][j] == '*');
            }
        }

        for (Integer i = 0; i < n; i++)
        {
            for (Integer j = 0; j < m; j++)
            {
                cout << arr[i][j] << endl;
            }
        }
    }

    return 0;
}

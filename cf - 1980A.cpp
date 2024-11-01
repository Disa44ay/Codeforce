#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin>> n >> m;
        cin.ignore();

        int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0, countG = 0, countE = 0;
        string s;
        getline(cin, s);

        vector<char>c(s.begin(), s.end());
        for(int i = 0; i < n; i++)
        {
            if(c[i] == 'A')
            {
                countA++;
            }
            else if(c[i] == 'B')
            {
                countB++;
            }
            else if(c[i] == 'C')
            {
                countC++;
            }
            else if(c[i] == 'D')
            {
                countD++;
            }
            else if(c[i] == 'E')
            {
                countE++;
            }
            else if(c[i] == 'F')
            {
                countF++;
            }
            else
            {
                countG++;
            }
        }
//        cout << countA << " " << countB << " " << countC << " " << countD << " " << countE << " " << countF << " " << countG;
//        cout << endl << endl;

        int count = 0;
        if(countA < m )
        {
            count += (m - countA);
        }
        if(countB < m )
        {
            count += (m - countB);
        }
        if(countC < m )
        {
            count += (m - countC);
        }
        if(countD < m )
        {
            count += (m - countD);
        }
        if(countE < m )
        {
            count += (m - countE);
        }
        if(countF < m )
        {
            count += (m - countF);
        }
        if(countG < m)
        {
            count += (m - countG);
        }


        cout  << count << endl;
    }
    return 0;

}

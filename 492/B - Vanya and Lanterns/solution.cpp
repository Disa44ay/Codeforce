#include <bits/stdc++.h>
using namespace std;
 
void quickSort(int a[], int left, int right)
{
    if (left >= right) return;
 
    int pivot = a[left + (right - left) / 2];
    int i = left, j = right;
 
    while (i <= j)
    {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j) quickSort(a, left, j);
    if (i < right) quickSort(a, i, right);
}
 
int main()
{
    int n, l;
    cin >> n >> l;
    vector<int> a(n);  
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a.data(), 0, n - 1);
 
    double diff0 = a[0] - 0.0;
    double diffn = l - a[n - 1];
    double max_gap = 0.0;
 
    for (int i = 0; i < n - 1; i++)
    {
        double gap = a[i + 1] - a[i];
        if (gap > max_gap)
        {
            max_gap = gap;
        }
    }
 
    double ans = max(max_gap / 2.0, max(diff0, diffn));
 
    cout << fixed << setprecision(10) << ans << endl;
 
    return 0;
}
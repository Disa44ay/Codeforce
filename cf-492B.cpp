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
//#include<bits/stdc++.h>
//using namespace std;
//
//void quickSort(int a[], int left, int right)
//{
//    if (left >= right) return;
//
//    int pivot = a[left + (right - left) / 2];
//    int i = left, j = right;
//
//    while (i <= j)
//    {
//        while (a[i] < pivot) i++;
//        while (a[j] > pivot) j--;
//        if (i <= j)
//        {
//            swap(a[i], a[j]);
//            i++;
//            j--;
//        }
//    }
//    if (left < j) quickSort(a, left, j);
//    if (i < right) quickSort(a, i, right);
//}
//
//int main()
//{
//    int n, l, dif, max = 0;
//    cin >> n >> l;
//    int a[n];
//    for(int i =0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    quickSort(a, 0, n - 1);
//
//    double diff0 = a[0] - 0;
//    double diffn = n - a[n-1];
//
//    for(int i =0; i < n-1; i++)
//    {
//        dif = a[i+1] - a[i];
//        if(dif > max)
//        {
//            max = dif;
//        }
//    }
//
//    double ans = max / 2.0;
//
//    if(diff0 > ans)
//    {
//        cout << diff0 << endl;
//    }
//    else if(diffn > ans)
//    {
//        cout << diffn << endl;
//    }
//    else
//    {
//        cout << ans << endl;
//    }
//
//    return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long long n, l;
//    float d, c = 0.0000;
//    cin >> n >> l;
//    int a[n];
//    for(int i = 0; i< n; i++)
//    {
//        cin >> a[i];
//    }
//    for(int i = 1; i < n; i++)
//    {
//        int key = a[i];
//        int j = i - 1;
//        while(j >= 0 && a[j] > key)
//        {
//            a[j + 1] = a[j];
//            j = j - 1;
//        }
//        a[j + 1] = key;
//    }
//    for(int i = 1; i < n; i++)
//    {
//        d = a[i] - a[i-1];
//        if(d > c)
//        {
//            c = d / 2;
//        }
//    }
////    for(int i = 0; i < n; i++){
////        cout << a[i] << " ";
////    }
////    cout << endl;
//    if(a[0] != 0)
//    {
//        if(c < a[0])
//        {
//            c = a[0];
//        }
//        cout << c << endl;
//        return 0;
//    }
//    if(a[n] != l)
//    {
//        if(c < a[n])
//        {
//            c = l - a[n];
//        }
//        cout << c << endl;
//        return 0;
//    }
//    if(a[n] != l && a[0] != 0)
//    {
//        float e = 0, f = 0.00;
//        e = l - a[n];
//        f = a[0] - 0.00;
//        {
//            if(c < e && f < e)
//            {
//                c = e;
//                cout << c << endl;
//                return 0;
//            }
//        }
//        if(c < f && e < f)
//        {
//            c = f;
//            cout << c << endl;
//            return 0;
//        }
//    }
//}

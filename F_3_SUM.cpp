#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

void getPairsMerge(int arr[], int l, int r, int mid, vector<pair<int, int>> &p)
{
    int b[l + r + 1], i = l, k = l, j = mid + 1;

    while (i <= mid && j <= r)
    {
        if (arr[i] > arr[j])
        {
            b[k] = arr[j];
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[j], arr[j]});
            k++;
            j++;
        }
        else
        {
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[i], arr[i]});
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        p.push_back({arr[i], arr[i]});
        i++;
        k++;
    }

    while (j <= r)
    {
        b[k] = arr[j];
        p.push_back({arr[j], arr[j]});
        j++;
        k++;
    }

    for (int x = l; x <= r; x++)
    {
        arr[x] = b[x];
    }
}

void getAllPairs(int arr[], int l, int r, vector<pair<int, int>> &p)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        getAllPairs(arr, l, mid, p);
        getAllPairs(arr, mid + 1, r, p);
        getPairsMerge(arr, l, r, mid, p);
    }
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    vector<pair<int, int>> p;
    getAllPairs(ar, 0, n - 1, p);
    for (auto it : p)
    {
        cout << it.first << " " << it.second << endl;
    }
}

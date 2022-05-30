#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;

struct Node
{
    Node *next[26];
    int frequency;
    int mx;
    string str;
    Node()
    {
        frequency = 0;
        mx = 0;
        for (int i = 0; i < 26; i++)
        {
            next[i] = nullptr;
        }
    }
};

void addString(Node *root, string s)
{
    Node *cur = root;
    for (char c : s)
    {
        if (cur->next[c - 'a'] == nullptr)
        {
            cur->next[c - 'a'] = new Node();
        }
        else
        {
            cur = cur->next[c - 'a'];
            cur->frequency++;
            cur->mx = max(cur->frequency, cur->mx);
        }
    }
}

int queryString(Node *root, string s)
{
    Node *cur = root;
    for (char c : s)
    {
        if (cur->next[c - 'a'] == nullptr)
        {
            return 0;
        }
        else
        {
            cur = cur->next[c - 'a'];
        }
    }
    return cur->mx;
}

int main()
{
    FAST;
    ll n;
    cin >> n;

    Node *root = new Node();

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        addString(root, s);
    }

    ll q;
    cin >> q;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << queryString(root, s) << endl;
    }

    return 0;
}

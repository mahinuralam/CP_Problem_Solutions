#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
using namespace std;

struct Node
{
    Node *next[26];
    int frequencty;
    Node()
    {
        frequencty = 0;
        for (int i = 0; i < 26; i++)
            next[i] = nullptr;
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
        cur = cur->next[c - 'a'];
        cur->frequencty++;
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
        cur = cur->next[c - 'a'];
    }

    return cur->frequencty;
}

int main()
{
    FAST;

    ll n, q;
    cin >> n >> q;

    Node *root = new Node();

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        addString(root, s);
    }

    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;

        cout << queryString(root, s) << endl;
    }

    return 0;
}

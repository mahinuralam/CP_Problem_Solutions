#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

struct Node
{
    Node *next[26];
    int frequency;
    bool flag = 0;
    Node()
    {
        frequency = 0;
        flag = 0;
        for (int i = 0; i < 26; i++)
            next[i] = nullptr;
    }
};

bool addString(Node *root, string s)
{
    Node *cur = root;
    bool found = 0;
    for (char c : s)
    {
        if (cur->next[c - '0'] == nullptr)
        {
            cur->next[c - '0'] = new Node();
        }

        if (cur->next[c - '0'] != nullptr && cur->flag == 1)
        {
            found = 1;
            break;
        }

        cur = cur->next[c - '0'];
    }

    cur->flag = 1;

    return found;
}

int queryString(Node *root, string s)
{
    Node *cur = root;
    for (char c : s)
    {
        if (cur->next[c - 'a'] == nullptr)
            return 0;
        cur = cur->next[c - 'a'];
    }
    return cur->flag;
}

void del(Node *cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}

int main()
{
    FAST;
    ll t, cs = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> v;
        Node *root = new Node();
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        sort(v.begin(), v.end());

        bool ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = addString(root, v[i]);
            // cout << ans << " asd " << v[i] << endl;
            if (ans == 1)
            {
                break;
            }
        }

        cout << "Case " << ++cs << ": ";
        if (ans == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        del(root);
    }

    return 0;
}

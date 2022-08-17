#include <bits/stdc++.h>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
#define ll long long
#define endl '\n'
using namespace std;

struct Node
{
    Node *next[4];
    int frequency;
    Node()
    {
        frequency = 0;
        for (int i = 0; i < 4; i++)
            next[i] = nullptr;
    }
};

int Index(char ch)
{
    if (ch == 'A')
        return 0;
    else if (ch == 'C')
        return 1;
    else if (ch == 'G')
        return 2;
    return 3;
}

int addString(Node *root, string s, int mx)
{
    Node *cur = root;
    int len = 0;
    for (char c : s)
    {
        int idx = Index(c);
        if (cur->next[idx] == nullptr)
        {
            cur->next[idx] = new Node();
        }

        cur = cur->next[idx];
        cur->frequency++;
        int val = cur->frequency;
        len++;
        mx = max(mx, (val * len));
    }

    return mx;
}

void del(Node *cur)
{
    for (int i = 0; i < 4; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}

int main()
{
    FAST;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0, mx = 0;
        Node *root = new Node();
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ans = addString(root, s, ans);
        }

        cout << "Case " << ++cs << ": ";

        cout << ans << endl;

        del(root);
    }

    return 0;
}

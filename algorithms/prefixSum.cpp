/* CQSUM */

#include <bits/stdc++.h>

using namespace std;

int v[100000];
int aux[100001];

int main() {

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    aux[0] = 0;

    for(int i = 0; i < n; i++)
        aux[i + 1] = v[i] + aux[i];
    
    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int esq, dir;
        cin >> esq >> dir;
        int resposta = aux[dir + 1] - aux[esq];
        cout << resposta << endl;

    }

    return 0;
}

/* URI - 2067 */

#include <bits/stdc++.h>
using namespace std;

#define NMAX 210

int mat[NMAX][NMAX];

int sum[NMAX][NMAX];

int main()
{
    int n, m, k, a, s;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0)
                mat[i][j] = 1;
            
            sum[i][j] = (sum[i - 1][j]) + (sum[i][j - 1]) - (sum[i - 1][j - 1]) + mat[i][j];
        }
    }

    scanf("%d", &k);

    while (k--)
    {
        int y = 0;
        scanf("%d", &a);
        for (int i = a; i <= n && y == 0; i++)
        {
            for (int j = a; j <= m; j++)
            {
                s = sum[i][j] - sum[i - a][j] - sum[i][j - a] + sum[i - a][j - a];
                if (s == a * a)
                {
                    y = 1;
                    break;
                }
            }
        }
        printf("%s\n", (y == 0) ? "no" : "yes");
    }

    return 0;
}
 /*URI - 1171 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int freq[2001];
    int n; cin >> n;

    for(int i = 1; i <= 2000; i++)
        freq[i] = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        freq[x]++;
    }

    for(int i = 1; i <= 2000; i++){
        if(freq[i] != 0)
            cout << i << " aparece " << freq[i] << " vez(es)\n";
    }
    return 0; 
}

 /*URI - 1566 */

int v[3000000], freq[231];


int main() {
    int casos;
    scanf("%d", &casos);
    while(casos-- > 0){
        for(int i = 0; i <=230; i++)
            freq[i] = 0;

        int n, x;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            freq[x]++;
        }
        bool primeiro = true;
        for(int i = 0; i <= 230; i++){
            for(int j = 0; j < freq[i]; j++){
                if(primeiro) primeiro = false;
                else printf(" ");
                
                printf("%d", i);
            }
        }
        printf("\n");
    }
    return 0;
}
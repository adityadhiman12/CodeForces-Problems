#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n, best, worst, current, answ = 0;
    scanf("%d", &n);
    scanf("%d", &current);
    best = worst = current;
    for(n--; n--; ) {
        scanf("%d", &current);
        if (current < worst) {
            worst = current;
            answ++;
        }
        if (current > best) {
            best = current;
            answ++;
        }
    }
    printf("%d\n", answ);
    return 0;
}

#include <cstdio>

using namespace std;

char s[100000];

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", s);

    int a = 0, d = 0;
    for (int i = 0; i < n; ++i) {
        a += (s[i] == 'A');
        d += (s[i] == 'D');
    }

    if (a > d) puts("Anton");
    else if (a < d) puts("Danik");
    else puts("Friendship");

}

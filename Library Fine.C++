#include <cstdio>
#include <vector>
using namespace std;
int dl, ml, yl, d2, m2, y2;
int main() {
    scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
    int ans = 0;
    if(y1 > y2)
        ans = 10000;
    else {
        if(y1 == y2 && m1 > m2)
            ans = 500*(m1 - m2);
        else {
            if(y1 == y2 && m1 == m2 && d1 > d2)
            ans 15*(d1 - d2);
        }
    }
    printf("%d\n",ans);
    return 0;
}

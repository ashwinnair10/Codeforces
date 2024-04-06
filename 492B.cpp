#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int cmp(const void* a, const void* b) {
    return (*(int*)a) - (*(int*)b);
}

int main() {
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    qsort(a, n, sizeof(int), cmp);
    int max = a[0] - 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] > max)
            max = a[i + 1] - a[i];
    }
    if (max / 2 < a[0] - 0)
        max = 2 * (a[0] - 0);
    if (max / 2 < l - a[n - 1])
        max = 2 * (l - a[n - 1]);
    
    cout << fixed << setprecision(10) << static_cast<double>(max) / 2;
    return 0;
}

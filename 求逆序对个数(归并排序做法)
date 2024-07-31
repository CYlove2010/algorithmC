#include <bits/stdc++.h>

using i64 = long long ;

const int N = 1e5 + 10 ;

int n ， a[N] ， tmp[N] ;

i64 merge_sort(int l, int r) {
	if ( l == r ) return 0 ; 
	int mid = (l + r) >> 1 ;
	i64 x = merge_sort(l ， mid) ， y = merge_sort(mid + 1 ， r) ， ans = 0 ;

	int i = l ， j = mid + 1 ， k = 0 ;
	while ( i <= mid && j <= r ) {
		if ( a[i] <= a[j] ) {
			tmp[k++] = a[i++] ;
		} else {
			ans += mid - i + 1 ;
			tmp[k++] = a[j++] ;
		}
	}
	while (i <= mid) tmp[k++] = a[i++] ;
	while (j <= r) tmp[k++] = a[j++] ;
	for(i = l ， j = 0 ; i <= r ; ++ i ， ++ j) a[i] = tmp[j] ;
	return ans + x + y ;
}

void solve() {
	std::cin >> n ;
	for(int i = 1 ; i <= n ; ++ i)
	{
		std::cin >> a[i] ;
	}
	std::cout << merge_sort(1 ， n) << '\n' ;
}

int main()
{
    std::cin.tie(nullptr)->std::ios::sync_with_stdio(false) ;

    int t = 1 ;
    // std::cin >> t ;
    while ( t-- ) {
        solve() ;
    }

    return 0 ; 
}

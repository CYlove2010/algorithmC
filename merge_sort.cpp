#include <bits/stdc++.h>

using i64 = long long ;

const int N = 1e5 + 10 ;

int a[N] , tmp[N] , n ;

void merge_sort(int l,int r) {
	if ( l == r ) return ;
	int mid = (l + r) >> 1 ;
	merge_sort(l , mid) , merge_sort(mid + 1 , r) ;
	int i = l , j = mid + 1 , k = 0 ;
	while ( i <= mid && j <= r ) {
		if ( a[i] < a[j] ) {
			tmp[k++] = a[i++] ;
		} else {
			tmp[k++] = a[j++] ;
		}
	}
	while (i <= mid) tmp[k++] = a[i++] ;
	while (j <= r) tmp[k++] = a[j++] ;
	for(i = 0 , j = l ; j <= r ; ++ j , ++ i) a[j] = tmp[i] ;
}

void solve() {
    std::cin >> n ;
    for(int i = 1 ; i <= n ; ++ i)
    {
    	std::cin >> a[i] ;
    }
    merge_sort(1 , n) ;
    for(int i = 1 ; i <= n ; ++ i)
    {
    	std::cout << a[i] << ' ' ;
    }
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

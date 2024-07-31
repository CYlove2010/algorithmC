#include <bits/stdc++.h>

using i64 = long long ;

const int N = 1e5 + 10 ;

int a[N] , n ; 

void quick_sort(int l,int r) {
	if ( l >= r ) return ;
	int mid = (l + r) >> 1 ;
	int k = a[mid] , i = l - 1 , j = r + 1 ;
	while ( j > i ) {
		do ++ i ; while ( a[i] < k ) ;
		do -- j ; while ( a[j] > k ) ;
		if ( j > i ) {
			std::swap(a[i] , a[j]) ;
		}
	}
	quick_sort(l , j) , quick_sort(j + 1 , r) ;
}

void solve() {
	std::cin >> n ;
	for(int i = 1 ; i <= n ; ++ i)
	{
		std::cin >> a[i] ;
	}    
	quick_sort(1 , n) ;
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

/*
题目链接 ： https://www.acwing.com/problem/content/787/
*/

#include <bits/stdc++.h>

using namespace std ;

const int N = 1e5 + 10 ;

int n , a[N] ;

void quick_sort(int l,int r)
{
	if ( l == r ) return ; 
	int mid = (l + r) >> 1 ;
	int k = a[mid] , i = l - 1 , j = r + 1 ;
	while ( j > i ) 
	{
		do i++ ; while (a[i] < k) ;
		do j-- ; while (a[j] > k) ; 
		if ( j > i ) {
			swap(a[i] , a[j]) ;
		}
	}
	quick_sort(l , j) , quick_sort(j + 1 , r) ;
}

int main()
{
	// cin.tie(nullptr)->ios::sync_with_stdio(false) ;
	
	cin >> n ;
	for(int i = 1 ; i <= n ; ++ i)
	{
		cin >> a[i] ;
	}

	quick_sort(1 , n) ;

	for(int i = 1 ; i <= n ; ++ i)
	{
		cout << a[i] << ' ' ;
	}

	return 0 ; 
}
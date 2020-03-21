#include<bits/stdc++.h>

int main()
{
	std::tuple<int,int> x = std::tuple<int,int> {1,-1};
	std::cout<<std::get<0>(x)<<std::endl;
}

// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
using namespace std;

int nthfibo(int n){

long double phi = 1.6180339887498948;

/// Binet's formula for nth fibonacci number  : round( (phi^n)/sqrt(5) ).

long double number =  pow (phi , n)/sqrt(5);

return round(number);


}

int main(){

int n;
cin >> n;

cout << nthfibo(n)<<'\n';

}

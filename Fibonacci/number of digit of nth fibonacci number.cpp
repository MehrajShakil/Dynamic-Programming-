
// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█


#include<bits/stdc++.h>
using namespace std;

int DigitOfNthFibo(int n){

long double phi = 1.6180339887498948;

/// log10(phi^n / sqrt(5))
/// log10(phi^n) - log10(sqrt(5))
/// (n * log10(phi)) - ( 1/2 * (log10(5)) )

long double digit =  (n * log10(phi)) - ( (log10(5))/2.0 );

return ceil(digit);


}

int main(){

int n;
cin >> n;

cout << DigitOfNthFibo(n)<<'\n';

}

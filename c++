/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*

// câu A
#include <iostream>

using namespace std;

int main()
{
    int N,S;
    cout<<" n = ";cin>>N;
    S = 0;
    for (int i = 0;i <= N;i++)
    S = S + i;
    cout<<" S1 = 1 + 2 + 3 + ... + "<<N;

    return 0;
}
*/
/*

// Câu B
#include <iostream>

using namespace std;

int main()
{
    int N,S;
    cout<<" n = ";cin>>N;
    S = 0;
    for (int i = 0;i <= N*2+1;i++)
    S = S + i;
    cout<<" S2 = 1 + 3 + 5 + ... + "<<N*2-1;

    return 0;
}
*/
/*
// Câu C
#include <iostream>

using namespace std;

int main()
{
    int N,S;
    cout<<" n = ";cin>>N;
    S = 0;
    for (int i = 0;i <= N;i++)
    S = N*2;
    cout<<" S3 = 2 + 4 + 6 + ... + "<<S;

    return 0;
}
*/
/*

// câu D
#include <iostream>

using namespace std;

int main()
{
    int N,S;
    cout<<" n = ";cin>>N;
    S = 0;
    for (int i = 1;i <= N;i++)
    S = N*N;
    cout<<" S4 = 1^2 + 2^2 + 3^2 + ... + "<<S;

    return 0;
}
*/
/*

// cau e
#include <iostream>

using namespace std;

long Phu(int n)
{
	long p = 0;
long ndp = 1;
	for (int i = 1; i <= n; i++)
{
		p += ndp*i;
		ndp *= -1;
}
	return p;
}

int main()
{
    int n;
    cout<<" n = ";cin>>n;
    cout<<" S4 = 1-2 + 3-4  + ... + "<<Phu(n);

    return 0;
}
*/

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main(  )
{
    int N,i,n;
    long int sum=0;
    float x,sum1=0;
    n=50000000;

    // generate random number
    srand( (unsigned)time( NULL ) );

    for(i=0;i<n;i++){
            N=0;
        while(sum1<1){
            x=(float)rand()/RAND_MAX;
            sum1=sum1+x;
            N=N+1;
            //cout<<(float)rand()/RAND_MAX<<"\n";
        }
        sum1=0;
        sum=sum+N;
    }

    cout<<(float)sum/n;
    return 0;

}



#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
using namespace std;

int main(  )
{
    int i,n,num=0;
    float x,y;
    n=50000000;

    // generate random number
    srand( (unsigned)time( NULL ) );

    for(i=0;i<n;i++){
            x=(float)rand()/RAND_MAX;
            y=(float)rand()/RAND_MAX;
            if((pow(x,2) +pow(y,2))<1){
                num=num+1;
            }
    }

    cout<<4*(float)num/n;
    return 0;

}



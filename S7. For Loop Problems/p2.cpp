#include<iostream>
using namespace std;

/*
    Find Special Pairs
    --------------------
    Count how many x,y numbers such that
    X in range [50, 300]
    Y in range [70, 400]
    X < Y
    (X+Y) divisible by 7
    --------------------
    solution --> 8040
*/
int main(){
    int count = 0;

    /*
    for (int x = 50; x <= 300; x++)
    {
        for (int y = 70; y <= 400; y++)
        {
            if (x < y && (x+y) % 7 == 0)
                count++;
        }
        
    }
    */

   //Imporved Solutuion

   for (int x = 50; x <= 300; x++)
   {
       int start = 70;
       if(start < x+1)
        start = x+1;
       for (int y = start; y <= 400; y++)
       {
           if ((x+y) % 7 == 0)
                count++;
       }
       
   }
   
    cout<<count;
       
    return 0;
}
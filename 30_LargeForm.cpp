#include<bits/stdc++.h>
using namespace std;
#define H 7

// one extra room in the char array is required for storing '\0' 
#define W 8

void hashprint (string num)
{
  int i, j, k;

  // declaring char 2D arrays and initializing 
  // with hash-printed digits 
  char zero[H][W] = 
  { " ##### ",    // H=0 
    " #   # ",            // H=1 
    " #   # ",            // H=2 
    " #   # ",            // H=3 
    " #   # ",            // H=4 
    " #   # ",            // H=5 
    " ##### "
  },                // H=6 
    one[H][W] = {
   "    #  ",
    "   ##  ",
    "    #  ",
    "    #  ",
    "    #  ",
    "    #  ",
    " ##### "
  }, two[H][W] = 
  {" ##### ",
    "     # ",
    "     # ",
    " ##### ",
    " #     ",
    " #     ",
    " ##### "
  }, three[H][W] = 
  {" ##### ",
    "     # ",
    "     # ",
    " ##### ",
    "     # ",
    "     # ",
    " ##### "
  }, four[H][W] = 
  {" #     ",
    " #  #  ",
    " #  #  ",
    " ##### ",
    "     # ",
    "     # ",
    "     # "
  }, five[H][W] = 
  {" ##### ",
    " #     ",
    " #     ",
    " ##### ",
    "     # ",
    "     # ",
    " ##### "
  }, six[H][W] = 
  { " ##### ",
    " #     ",
    " #     ",
    " ##### ",
    " #   # ",
    " #   # ",
    " ##### "
  }, seven[H][W] = 
  {" ##### ",
    "     # ",
    "     # ",
    "   ### ",
    "     # ",
    "     # ",
    "     # "
  }, eight[H][W] = 
  {" ##### ",
    " #   # ",
    " #   # ",
    " ##### ",
    " #   # ",
    " #   # ",
    " ##### "
  }, nine[H][W] = 
  {" ##### ",
    " #   # ",
    " #   # ",
    " ##### ",
    "     # ",
    "     # ",
    "     # "
  };


  if (num.length () > 10)
    cout << "\nYou must enter a number up to 10 digits.\nTry again!\n";

  else
    {
      cout << "\n";
      k = 1;
      j = 0;            //controls H of each digit 
      while (k <= 7)        //controls height 
    {
      for (i = 0; i < num.length (); i++)    //reads each digit 
        {
          if (num[i] == '0')
        cout << zero[j];
          else if (num[i] == '1')
        cout << one[j];
          else if (num[i] == '2')
        cout << two[j];
          else if (num[i] == '3')
        cout << three[j];
          else if (num[i] == '4')
        cout << four[j];
          else if (num[i] == '5')
        cout << five[j];
          else if (num[i] == '6')
        cout << six[j];
          else if (num[i] == '7')
        cout << seven[j];
          else if (num[i] == '8')
        cout << eight[j];
          else if (num[i] == '9')
        cout << nine[j];
        }
      cout << "\n";
      k++;
      j++;
    }
    }
}

//Driver program to test above function 
int main ()
{
  // passing 0194 as string to function hashprint 
  // you can pass whatever string you wish to 

  hashprint ("8055");

  return 0;
}
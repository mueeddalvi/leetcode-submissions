import java.io.*;
import java.util.*;
import java.math.*;
class Solution {
public
    
    static String  intToRoman(int num) {
        
        String n1="",n="";
        String numerals[]={"M","CM","D","CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
      

            int i=0;

            while(num>0)
            {
                     if(num-values[i]>=0)
                     {
                        n=n+numerals[i];
                        num-=values[i];   
                     }

                    else
                    {
                        i++;
                    }
            }

            return n;
    }

    public static void main(String[] args)
    {

        String x=intToRoman(128);
        System.out.println(x);
    }

    
}

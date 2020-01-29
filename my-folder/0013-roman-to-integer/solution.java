import java.util.*;
import java.io.*;
class Solution {
    public static int romanToInt(String s) {


    	int sum=0;
 			for(int i=0;i<s.length();i++)
 			{

 				char c = s.charAt(i);
 				int v=value(c);
 				if(i+1<s.length()){

 					char c2=s.charAt(i+1);
 					int v2=value(c2);

 					if(v2>v)
 					{
 						sum=sum+(v2-v);
 						i++;
 					}

 					else
 					{
 						sum=sum+v;
 					}
 				}

 				else
 				{
 					sum=sum+v;
 				}
 			} 

 		return sum;      
    }


    public static int value(char x)
    {

    	if(x=='I')
    		return 1;
        if(x=='V')
            return 5;
    	if(x=='X')
    		return 10;
    	if(x=='L')
    		return 50;
    	if(x=='C')
    		return 100;
    	if(x=='M')
    		return 1000;
    	if(x=='D')
    		return 500;

    	return -1;
    	
    }

    public static void main(String[] args) {
   			
    		System.out.println(romanToInt("CXLIX"));
    }
}

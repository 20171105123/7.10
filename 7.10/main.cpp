//
//  main.cpp
//  7.10
//
//  Created by 鲁祥 on 2018/7/10.
//  Copyright © 2018年 鲁祥. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    FILE *a;
    FILE *b;
    b=fopen("/Users/S20171105123/Desktop/7.10.csv","a");
    string s1[200];
    string s2[200];
    string s3[200];
    string s4[200];
    string s5[200];
    string s6[200];
    string s7[200];
    string s8[200];
    string s9[200];
    string s10[200];
    string s11[200];
    //int s12[200];
    
    
    if ((a=fopen("/Users/s20171105123/Desktop/7.10/7.10/7.10.csv","r"))==0)
    {
        printf("nono\n");
    }
    
    else
    {
        for(int i=0;i<3;i++)
        {
            fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ，",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            
            //if(i==1||i==2)
            //{
            
            //fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d \n",s1,s2,s3,s4,s5,s6,s12[1],s12[2],s12[3],s12[4],s12[5]);
            
            //}
            //else{
            
            fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            
            
        }
        
        
    }
      return 0;
}

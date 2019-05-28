// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    //numerator and denominator as integer
    int n= atoi(&fraction[0]);
    int d= atoi(&fraction[2]);
    if (d==4)
    return (n*2);
    else
    return n;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    int t;
    char s=note[0];
    if (s=="A")
    t=0;
    else{
    if (s=="B")
    t=2;
    else {
    if (s=="C")
    t=-9;
    else {
    if (s="D")
    t=-7;
    else{
    if (s=="E")
    t=-5;
    else{
    if(s=="F")
    t=-4;
    else{
    if (s=="G"){
    t=-2;} } } } } } }

    if (strlen(note)==2)
       m=atoi(&note[1]);
    else{
       m=atoi(&note[2]);
       if (note[1]=="#")
       t=t+1;
       else
       t=t-1;}

    if ((m-4)>0)
    r=440*(pow(2,m-4));
    else
    r=440/(pow(2,(m-4)*(-1)));

    float freq=round(r*(pow(2,t/12)));
    return freq;
}



// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    // rest==blank line==line ending
    //creating the condition for bool
    if (strcmp(s,"")==0)
      return 1;
    else
      return 0;
}


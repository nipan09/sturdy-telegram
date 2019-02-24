#!/bin/bash
echo Welcome to arithmetic
read -p "username: " 
read -sp "password: " pass

echo
if [ $pass=="nipan9899" ]           #space bw brackets and text 
then
   echo You are signed in.
   for value in {1..3}              #two dots
   do  
      echo Input your number
      read -p "a: " a               #space between var and quote
      read -p "b: " b
      let "s=$a+$b"                 #since -p, so quotes 
      echo Sum is $s
   done
else
   echo Password is wrong.
fi


#!/bin/bash
read a b
let "s=$a+$b"                        #let
echo $s

let s++
echo $s

let s=5+4
echo $s

let "s = 5+4"
echo $s

s=$(( 5+4 ))                          #double paranthesis
echo $s

c=$((5+4))
echo $c  #9

c=$(( $c+4 ))          #c=$((c+4)) will also work
echo $c    #13

a='Hello World'
echo ${#a}   #11




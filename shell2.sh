#! /bin/bash

# usage of case in matching pattern
age=$1
case $age in
    "child" )
        echo "The price is Rs.100";;
    "adult" )
        echo "The price is Rs.200";;
    "old" )
        echo "The price is Rs.150";;
    * )
        echo "--Error--";;
    esac


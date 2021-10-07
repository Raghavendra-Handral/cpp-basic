#! /bin/bash

echo $BASH
echo $BASH_VERSION
echo Enter the name
read name
echo Entered name is $name

# Entering input in same line
read -p "Enter username : " username
read -sp "Enter password : " pword
echo
echo "The username is $username"
echo "The password is $pword"

# Reading and writing of array
echo "Enter fruit names : " 
read -a fruits
echo "Entered fruit names are : ${fruits[0]}, ${fruits[2]} and ${fruits[1]}"
read 
echo "The entered : $REPLY"

# passing arguments from command line
echo $0 $1 $2 $3 ' < echo $0 $1 $2 $3'
args=("$@")
echo "${args[0]} ${args[1]} ${args[2]}"
echo $@
echo $# # to get the number of arguments passed

# if else without using comparing symbol
count=$1
if [ $count -lt 10 ]
then
    echo "Lesser than 10"
else
    echo "Greater than 10"
fi

# nested if else with using comparing symbol
count=$1
if (( $count == 10 ))
then
    echo "Equal to 10"
elif (( $count < 10 ))
then
    echo "Lesser than 10"
else
    echo "Greater than 10"
fi
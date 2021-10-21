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
# read data without any variable name is stored in 'REPLY'
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

# to check the presence of file 
echo -e "Enter the filename : \c"
read filename
if [ -e $filename ]
then 
    echo "$filename found"
else
    echo "$filename not found"
fi

# to append something to file
echo -e "Enter the filename : \c"
read filename
if [ -f $filename ]
then 
    if [ -w $filename ]
    then
        echo "Enter some text to append into file. Ctrl+d to stop writing"
        cat >> $filename # ">>" - for appending, '>' - for rewriting the file
    else
        echo "$filename does not have write permission"
    fi
else
    echo "$filename not found"
fi

# use of logical and operator ## -a for 'and', -o for 'or'
num=123
if [ $num -le 99 -a $num -ge 10 ]
# if [[ $num -le 99 && $num -ge 10 ]]
# if [ $num -le 99 ] && [ $num -ge 10 ]
then
    echo "It is a 2-digit number"
else
    echo "Not a 2-digit number"
fi

# Arithmetic Operations
num1=12
num2=5
echo $(( num1 + num2 ))
echo $(( num1 - num2 ))
echo $(( num1 * num2 ))
echo $(( num1 / num2 ))
echo $(( num1 % num2 ))

# Arithmetic Operations of integers
m=12
n=4

echo $(expr $m + $n )
echo $(expr $m - $n )
echo $(expr $m \* $n )
echo $(expr $m / $n )
echo $(expr $m % $n )


# Floating point operations
a=50.8
b=2.4

echo "$a+$b" | bc
echo "$a-$b" | bc
echo "$a*$b" | bc
echo "scale=5;$a/$b" | bc
echo "$a%$b" | bc

echo "scale=5;sqrt($a)" | bc -l  # -l is math library
echo "scale=5;$a^2" | bc -l
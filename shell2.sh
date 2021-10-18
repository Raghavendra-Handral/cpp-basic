#! /bin/bash
<<comment
# usage of case in matching regular pattern
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

# usage of case in pattern
echo -e "Enter some character: \c"
read char
case $char in
    [a-z] )
        echo "The user input $char is in a to z";;
    [A-Z] )
        echo "The user input $char is in A to Z";;
    [0-9] )
        echo "The user input $char is in 0 to 9";;
    ? )
        echo "The user input $char is a special character";;
    * )
        echo "Undefined input";;
esac

# Array usage example
vehicles=('car' 'bus' 'cycle')
echo "${vehicles[@]}"
echo "${!vehicles[@]}" # ! - to get indicies
echo "${#vehicles[@]}" # # - to get the number of elements in array
vehicles[5]='auto'
echo "${vehicles[@]}"
echo "${!vehicles[@]}"
echo "${#vehicles[@]}"
unset vehicles[2]
vehicles[1]='truck'
echo "${vehicles[@]}"
echo "${!vehicles[@]}"
echo "${#vehicles[@]}"

# While loop and sleep usage example
echo -e "Enter number less than 10: \c"
read count
#count=$1 # to print from input to 10
while (( $count <= 10 ))
do
    echo "$count"
    (( count++ ))
    sleep 1 # execution halts for 1 second
done
comment
# reading content in a file using while loop
while IFS=1 read file
do
    echo $file
done < shell2.sh

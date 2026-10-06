#!/bin/bash




#we are going to use string and their application


myData="Hello senorita, My name is Mayank. Nice to meet you !"
myDataLength=${#myData}
echo "my inroduction length is $myDataLength ."
echo "my introduction in upper case is ----- ${myData^^}"
echo "my introduction in lower case is ------${myData,,}"


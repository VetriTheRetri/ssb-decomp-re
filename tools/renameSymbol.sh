#!/bin/bash

grep "$1" symbols -lr | xargs sed -i 's/$1/$2/g'
grep "$1" include -lr | xargs sed -i 's/$1/$2/g'
grep "$1" src -lr | xargs sed -i 's/$1/$2/g'

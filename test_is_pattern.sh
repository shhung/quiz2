#!/bin/bash

for (( i=0; i<=65535; i++ )); do
    ./is_pattern $i
done

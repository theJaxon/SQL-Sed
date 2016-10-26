#!/bin/bash 
SQLfile = $(ls | grep *.sql)
sed -i $SQLfile.bak -f sedsql $SQLfile

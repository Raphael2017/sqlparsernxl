#!/bin/sh

bison ./sqlparser.y -r all
mv ./sqlparser_bison.h ../include/sqlparser_bison.h
mv ./sqlparser_bison.cpp ../src/sqlparser_bison.cpp
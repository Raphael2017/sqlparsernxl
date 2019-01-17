#!/bin/sh

flex ./sqlparser.l
mv ./sqlparser_flex.h ../include/sqlparser_flex.h
mv ./sqlparser_flex.cpp ../src/sqlparser_flex.cpp
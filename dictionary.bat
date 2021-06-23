@echo off
title dictionary
color 0a
:loop
set/p input=
if %input%==Car goto A
if %input%==Bar goto B
if
:A
echo Car=vechile
goto loop
:B
echo Bar=Drink
goto loop

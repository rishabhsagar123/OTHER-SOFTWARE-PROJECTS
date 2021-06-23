@echo off
title Matrix
color 0a
mode 1000
goto a
:a
pause
echo Press Any Key To Conntinue..
cls
goto Matrix
:Matrix
ping localhost 1.1.1.1 -n -w 0.3>null
echo %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%
goto Matrix

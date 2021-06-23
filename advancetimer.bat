@echo off
title timer
set/p timer=The timer is start=
set time=%timer%
:loop
cls
set/a time=%time%-1
if %time%==0 goto end
echo %time% second(s)
ping localhost -n 2>nul
cls
goto loop
:end
echo timesup
goto end

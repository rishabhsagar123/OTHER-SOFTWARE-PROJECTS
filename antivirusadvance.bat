@echo off
title The Shield
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
color 06
echo We Make A search.log File For Currently Running Process..
pause
echo Total Running Processes
tasklist /v /fi "STATUS eq running"
pause
tasklist /FI "IMAGENAME eq cmd.exe" /FO CSV > search.log
pause
color 0b
echo Batch Files Running On System
color 01
cd "C:\Windows\System32"
for %%f in (*.bat) do (
    if "%%~xf"==".bat" echo %%f
)
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
color 06
echo We Make A search.log File For Currently Running Process..
pause
echo Total Running Processes
tasklist /v /fi "STATUS eq running"
pause
tasklist /FI "IMAGENAME eq wscript.exe" /FO CSV > search.log
pause
color 0b
echo "VBS Files Running On System"
color 01
cd "C:\Windows\System32"
for %%f in (*.vbs) do (
    if "%%~xf"==".vbs" echo %%f
)
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

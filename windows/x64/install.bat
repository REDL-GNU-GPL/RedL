@echo off

cd %~dp0
move redl %appdata%

set Key=HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Environment
set FolderToAdd=C:\MinGW\bin
For /f "tokens=2*" %%a In ('Reg.exe query "%key%" /v Path^|Find "Path"') do set CurPath=%%~b
reg.exe add "%Key%" /v Path /t REG_EXPAND_SZ /d "%CurPath%;%FolderToAdd%


set Key=HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Environment
set FolderToAdd=C:\Users\%UserName%\AppData\Roaming\redl\
For /f "tokens=2*" %%a In ('Reg.exe query "%key%" /v Path^|Find "Path"') do set CurPath=%%~b
reg.exe add "%Key%" /v Path /t REG_EXPAND_SZ /d "%CurPath%;%FolderToAdd%

pause

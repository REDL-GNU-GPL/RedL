@echo off
set Key=HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Environment

set FolderToAdd=%~dp0

For /f "tokens=2*" %%a In ('Reg.exe query "%key%" /v Path^|Find "Path"') do set CurPath=%%~b
reg.exe add "%Key%" /v Path /t REG_EXPAND_SZ /d "%CurPath%;%FolderToAdd%

set Key=HKLM\SYSTEM\CurrentControlSet\Control\Session Manager\Environment

set FolderToAdd=%~dp0gcc\bin\

For /f "tokens=2*" %%a In ('Reg.exe query "%key%" /v Path^|Find "Path"') do set CurPath=%%~b
reg.exe add "%Key%" /v Path /t REG_EXPAND_SZ /d "%CurPath%;%FolderToAdd%


pause
cd %~dp0
move redl "C:\Users\%UserName%\AppData\Roaming\" 

setx path "%PATH%;C:\Users\%UserName%\AppData\Roaming\redl\"
setx path "%PATH%;C:\Users\%UserName%\AppData\Roaming\redl\gcc\bin\"



pause
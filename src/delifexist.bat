@echo off
REM Copyright (c) 2012 CIYAM Open Developers
REM
REM Distributed under the MIT/X11 software license, please refer to the file license.txt
REM in the root project directory or http://www.opensource.org/licenses/mit-license.php.

:loop
if '%1' == '' goto end
if exist %1 del %1
shift
goto loop

:end
